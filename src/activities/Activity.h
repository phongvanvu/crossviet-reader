#pragma once
// ============================================================================
// CrossPoint Reader — Lớp Cơ Sở Màn Hình Hoạt Cảnh (Activity Base Class)
//
// [MÔ TẢ KIẾN TRÚC BẰNG TIẾNG VIỆT]
// Activity đại diện cho một màn hình giao diện người dùng (tương tự như Activity trong Android).
// Mọi màn hình trong firmware (Home, Reader, Library, Settings, WebServer, FileBrowser...)
// đều kế thừa từ lớp cơ sở này.
//
// Vòng đời (Lifecycle) của một Activity:
//   - onEnter(): Được gọi khi màn hình bắt đầu hiển thị hoặc được phục hồi từ ngăn xếp (stack).
//   - loop(): Được gọi liên tục từ vòng lặp chính của firmware để xử lý logic, đọc input.
//   - render(RenderLock&&): Chịu trách nhiệm vẽ toàn bộ nội dung lên bộ đệm màn hình E-Ink.
//   - onExit(): Được gọi khi màn hình bị đóng hoặc tạm ẩn khi màn hình con được đẩy vào stack.
//   - prepareForSleep(): Cơ hội cuối cùng để lưu dữ liệu/trạng thái trước khi máy đi vào chế độ ngủ.
//
// Cơ chế vẽ lại màn hình:
//   - requestUpdate(immediate): Gửi tín hiệu yêu cầu Render Task vẽ lại màn hình bất đồng bộ.
//   - requestUpdateAndWait(): Yêu cầu vẽ lại và chặn luồng cho đến khi việc vẽ lên E-Ink hoàn tất.
// ============================================================================

#include <Logging.h>

#include <cassert>
#include <memory>
#include <string>
#include <utility>

#include "ActivityManager.h"  // for using the ActivityManager singleton
#include "ActivityResult.h"
#include "GfxRenderer.h"
#include "MappedInputManager.h"
#include "RenderLock.h"
#include "util/ScreenshotInfo.h"

class Activity {
  friend class ActivityManager;

 protected:
  std::string name;
  GfxRenderer& renderer;
  MappedInputManager& mappedInput;

  ActivityResultHandler resultHandler;
  ActivityResult result;

 public:
  explicit Activity(std::string name, GfxRenderer& renderer, MappedInputManager& mappedInput)
      : name(std::move(name)), renderer(renderer), mappedInput(mappedInput) {}
  virtual ~Activity() = default;
  virtual void onEnter();
  virtual void onExit();
  // Last chance to queue activity-owned state before sleep events are drained.
  virtual void prepareForSleep() {}
  virtual void loop() {}

  virtual void render(RenderLock&&) {}

  // If immediate is true, the update will be triggered immediately.
  // Otherwise, it will be deferred until the end of the current loop iteration.
  virtual void requestUpdate(bool immediate = false);

  // Request an immediate render and block until it completes.
  virtual void requestUpdateAndWait();

  virtual bool skipLoopDelay() { return false; }
  virtual bool preventAutoSleep() { return false; }
  // Exclusive storage activities suspend global controls and normal activity
  // transitions so no filesystem code races a raw SD-card owner.
  virtual bool requiresExclusiveStorageLoop() const { return false; }
  virtual bool isReaderActivity() const { return false; }
  virtual bool acceptsRemoteInput() const { return false; }
  // Returns true when the activity schedules its own forced refresh.
  virtual bool handleForcedRefresh() { return false; }
  virtual bool isHomeActivity() const { return false; }
  virtual bool handleHomeGesture() { return false; }
  virtual ScreenshotInfo getScreenshotInfo() const { return {}; }

  // Start a new activity without destroying the current one
  // Note: requestUpdate() will be invoked automatically once resultHandler finishes
  void startActivityForResult(std::unique_ptr<Activity>&& activity, ActivityResultHandler resultHandler);

  // Set the result to be passed back to the previous activity when this activity finishes
  void setResult(ActivityResult&& result);

  // Finish this activity and return to the previous one on the stack (if any)
  static void finish();

  // Convenience method to facilitate API transition to ActivityManager
  // TODO: remove this in near future
  static void onGoHome(HomeMenuItem item = HomeMenuItem::NONE);
  static void onSelectBook(const std::string& path);
};
