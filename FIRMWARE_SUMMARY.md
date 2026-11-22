# Tóm tắt Firmware CrossPoint Reader (`crossviet-reader`)

## 1. Tổng quan
**CrossPoint Reader** (phiên bản hiện tại `2.0.0`) là firmware mã nguồn mở dành cho các máy đọc sách màn hình E-Ink sử dụng vi điều khiển ESP32. Dự án tập trung vào một mục tiêu cốt lõi: mang lại trải nghiệm đọc sách (đặc biệt là EPUB) nhẹ, nhanh, dễ đọc và bền bỉ, thay vì nhồi nhét nhiều tính năng đa dụng.

---

## 2. Phần cứng hỗ trợ & Kiến trúc nền tảng
Firmware sử dụng **FreeInk SDK** (`freeink-sdk/`) làm lớp trừu tượng phần cứng (HAL), board profiles, driver màn hình và thành phần UI dùng chung.

- **Nhóm ESP32-C3** *(mức tài nguyên cơ sở: ~380 KB RAM khả dụng, không PSRAM, 1 framebuffer)*:
  - Xteink X4, Xteink X3
- **Nhóm ESP32-S3** *(hỗ trợ thêm tính năng như PSRAM/cảm ứng tùy mẫu)*:
  - Xteink X4Pro, Xteink X4Classic
  - Seeed reTerminal Sticky, M5PaperMono, Metalio E-Ink 4, EEGOREAD A4, Boox Picco

---

## 3. Các tính năng chính

### Đọc sách & Hiển thị
- **Định dạng hỗ trợ**: `.epub` (EPUB 2/3), `.xtc` / `.xtch`, `.txt`, `.bmp`.
- **Trình dựng EPUB**: Hỗ trợ CSS nhúng, hiển thị ảnh (JPEG/PNG/GIF/BMP), ngắt từ (hyphenation), kerning, bảng thích ứng, chú thích ruby (CJK), footnote, mục lục chương, nhảy đến phần trăm, tự động lật trang, xoay màn hình và chế độ đọc tập trung (focus reading).
- **Từ điển & Đánh dấu**: Tra từ điển offline chuẩn **StarDict**, tạo bookmark, bôi đen (highlight) và lưu đoạn trích (clippings).

### Điều khiển & Tương tác
- **Cảm ứng & Phím bấm**: Hỗ trợ nhấn link/tra từ/chọn văn bản trên máy cảm ứng; tùy biến phím cứng trên máy dùng nút bấm.
- **Tiện ích phần cứng**: Lật trang bằng cảm biến nghiêng (X3, Sticky), kết nối **Bluetooth Page Turner** (ánh xạ nhấn ngắn/dài), chế độ ổ đĩa **USB Drive** (X4Pro), chụp ảnh màn hình.

### Phông chữ & Đa ngôn ngữ
- **Phông chữ thẻ SD**:
  - Thiết bị có PSRAM: dùng trực tiếp `.ttf`, `.otf`, `.ttc` trong `/fonts/` hoặc `/.fonts/`.
  - Mọi thiết bị: hỗ trợ định dạng tối ưu `.cpfont` (không cần flash lại firmware).
- **Quốc tế hóa (i18n)**: 34 ngôn ngữ giao diện, hỗ trợ fallback CJK và văn bản phải-sang-trái (RTL qua `MiniBidi` & `OtShaper`).

### Quản lý thư viện & Đồng bộ
- **Thư viện**: Lập chỉ mục tìm kiếm theo tên sách/tác giả, sắp xếp gần đây/ABC, duyệt thư mục, quản lý cache trên thẻ SD.
- **Đồng bộ**: Đồng bộ tiến độ đọc qua **KOReader Sync / CrossPoint Sync**, hỗ trợ đồng bộ khi vào chế độ ngủ (sync on sleep), theo dõi phiên đọc, đồng bộ bookmark và clippings.

### Kết nối không dây & Web UI
- Hỗ trợ Wi-Fi chế độ **AP** (phát điểm truy cập) và **STA** (kết nối Wi-Fi có sẵn) kèm mã QR.
- **Web UI tích hợp**: Truyền file, Upload nhanh qua WebSocket, **WebDAV**, cấu hình thiết bị trên trình duyệt, công cụ tối ưu EPUB (EPUB Optimizer).
- **Kho sách & Cập nhật**: Kết nối không dây **Calibre**, trình duyệt **OPDS** (lưu tối đa 8 server, tìm kiếm và tải trực tiếp), cập nhật **OTA** trực tiếp từ GitHub Releases.

### Tùy biến & Mở rộng
- Chế độ ban đêm (night mode), nhiều giao diện dựng sẵn (Classic, Lyra, Lyra Extended, RoundedRaff), tùy chỉnh màn hình chờ, thanh trạng thái và chu kỳ làm mới màn hình E-Ink.
- **Plugin trên thẻ SD**: Cài đặt và quản lý plugin (kho sách, công cụ tải...) thông qua Web UI.

---

## 4. Cấu trúc mã nguồn & Môi trường build
- `src/`: Luồng hoạt động chính (`activities/`), cài đặt (`CrossPointSettings`), trạng thái, mạng (`network/`), đồng bộ (`sync/`), clippings, quản lý font SD và ánh xạ phím.
- `lib/`: Các module lõi như `Epub`, `GfxRenderer`, `EpdFont`, `hal`, `I18n`, `KOReaderSync`, `BlePageTurner`, `LibraryIndex`, `MiniBidi`, `OtShaper`, các bộ giải mã ảnh.
- `platformio.ini`: Build trên nền `pioarduino` (ESP32 Arduino framework, C++20, `-fno-exceptions`), tối ưu chặt RAM/Flash (single framebuffer, wolfSSL TLS 1.3 dùng single-precision ECC, tách FAT cache cho SdFat).

---

## 5. Phạm vi & Định hướng phát triển (`SCOPE.md`)
- **Ưu tiên hiện tại**: Giảm tiêu thụ DRAM và phân mảnh heap, giảm dung lượng Flash, dọn dẹp mã nguồn, cải thiện chất lượng hiển thị EPUB và chữ viết.
- **Ngoài phạm vi (Out-of-scope)**: Không tích hợp ứng dụng tương tác (game, máy tính, ghi chú/soạn thảo), không chạy tác vụ mạng nền (RSS, trình duyệt web), không render PDF.
