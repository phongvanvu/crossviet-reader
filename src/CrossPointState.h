#pragma once
#include <ArduinoJson.h>
#include <PersistableStore.h>

#include <cstdint>
#include <string>

// ============================================================================
// CrossPoint Reader — Quản Lý Trạng Thái Tồn Tại Toàn Cục (Persistent State)
//
// [MÔ TẢ KIẾN TRÚC BẰNG TIẾNG VIỆT]
// CrossPointState lưu giữ các trạng thái quan trọng của máy đọc sách giữa các phiên khởi động:
//   - Đường dẫn cuốn sách đang mở dở (`openEpubPath`): Giúp mở lại ngay trang sách khi bật máy.
//   - Trạng thái hình nền ngủ (`sleepLcgState` / `sleepOverlayLcgState`): Lựa chọn ngẫu nhiên ảnh
//     màn hình chờ mà không bị lặp lại liên tiếp.
//   - Số lần nạp ReaderActivity, cờ báo lần ngủ gần nhất có phải từ màn hình đọc sách hay không.
// Dữ liệu được lưu trữ dưới dạng JSON trên thẻ nhớ SD tại đường dẫn: `/.crosspoint/state.json`.
// ============================================================================

class CrossPointState : public PersistableStore<CrossPointState> {
  CrossPointState() = default;

  friend class PersistableStore<CrossPointState>;

 public:
  static constexpr uint8_t SLEEP_AVOID_REPEAT_LOOKBACK = 5;

  std::string openEpubPath;
  uint32_t sleepLcgCount = 0;
  uint32_t sleepLcgState = 0;
  uint32_t sleepOverlayLcgCount = 0;
  uint32_t sleepOverlayLcgState = 0;
  uint8_t readerActivityLoadCount = 0;
  bool lastSleepFromReader = false;
  bool showBootScreen = true;

  static const char* getFilePath() { return "/.crosspoint/state.json"; }
  void toJson(JsonDocument& doc) const;
  bool fromJson(JsonVariantConst doc);

  void getSleepLCG(uint32_t& seed, uint32_t& state, uint16_t& indexesLeft, uint16_t& indexesTotal) const;
  void getSleepOverlayLCG(uint32_t& seed, uint32_t& state, uint16_t& indexesLeft, uint16_t& indexesTotal) const;

  void setSleepLCG(uint32_t seed, uint32_t state, uint16_t indexesLeft, uint16_t indexesTotal);
  void setSleepOverlayLCG(uint32_t seed, uint32_t state, uint16_t indexesLeft, uint16_t indexesTotal);
};

#define APP_STATE CrossPointState::getInstance()
