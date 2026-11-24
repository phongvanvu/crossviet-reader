# Hướng dẫn sử dụng CrossPoint

Chào mừng bạn đến với firmware **CrossPoint**. Hướng dẫn này mô tả chi tiết các phím bấm phần cứng, thao tác điều hướng và các tính năng đọc sách của thiết bị.

- [Hướng dẫn sử dụng CrossPoint](#hướng-dẫn-sử-dụng-crosspoint)
  - [1. Tổng quan phần cứng](#1-tổng-quan-phần-cứng)
    - [Bố cục phím bấm](#bố-cục-phím-bấm)
    - [Chụp ảnh màn hình](#chụp-ảnh-màn-hình)
    - [Trung tâm điều khiển và Đèn nền](#trung-tâm-điều-khiển-và-đèn-nền)
  - [2. Nguồn & Khởi động](#2-nguồn--khởi-động)
    - [Bật / Tắt nguồn](#bật--tắt-nguồn)
    - [Khởi động lần đầu](#khởi-động-lần-đầu)
  - [3. Các màn hình giao diện](#3-các-màn-hình-giao-diện)
    - [3.1 Màn hình chính (Home)](#31-màn-hình-chính-home)
    - [3.2 Chế độ đọc sách](#32-chế-độ-đọc-sách)
    - [3.3 Màn hình Duyệt tập tin (Browse Files)](#33-màn-hình-duyệt-tập-tin-browse-files)
    - [3.4 Màn hình Thư viện (Library)](#34-màn-hình-thư-viện-library)
    - [3.5 Màn hình Truyền tập tin (File Transfer)](#35-màn-hình-truyền-tập-tin-file-transfer)
    - [3.5.1 Truyền sách không dây từ Calibre](#351-truyền-sách-không-dây-từ-calibre)
      - [Cài đặt plugin trong Calibre](#cài-đặt-plugin-trong-calibre)
      - [Cấu hình plugin CrossPoint trong Calibre](#cấu-hình-plugin-crosspoint-trong-calibre)
      - [Tải sách lên thiết bị](#tải-sách-lên-thiết-bị)
      - [Xóa sách](#xóa-sách)
    - [3.6 Cài đặt (Settings)](#36-cài-đặt-settings)
      - [3.6.1 Hiển thị (Display)](#361-hiển-thị-display)
      - [3.6.2 Trình đọc (Reader)](#362-trình-đọc-reader)
      - [3.6.3 Điều khiển (Controls)](#363-điều-khiển-controls)
      - [3.6.4 Hệ thống (System)](#364-hệ-thống-system)
      - [3.6.5 Máy chủ OPDS (Nhiều thư viện)](#365-máy-chủ-opds-nhiều-thư-viện)
      - [3.6.6 Cài đặt qua Web (Wi-Fi + OPDS)](#366-cài-đặt-qua-web-wi-fi--opds)
      - [3.6.7 Thiết lập nhanh Đồng bộ KOReader](#367-thiết-lập-nhanh-đồng-bộ-koreader)
        - [Lựa chọn A: Máy chủ CrossPoint Sync (`sync.crosspointreader.com`, mặc định)](#lựa-chọn-a-máy-chủ-crosspoint-sync-synccrosspointreadercom-mặc-định)
        - [Lựa chọn B: Máy chủ KOReader công cộng cũ (`sync.koreader.rocks`)](#lựa-chọn-b-máy-chủ-koreader-công-cộng-cũ-synckoreaderrocks)
        - [Lựa chọn C: Máy chủ tự lưu trữ (Docker Compose)](#lựa-chọn-c-máy-chủ-tự-lưu-trữ-docker-compose)
        - [Đồng bộ trong khi đọc sách](#đồng-bộ-trong-khi-đọc-sách)
    - [3.7 Màn hình chờ (Sleep Screen)](#37-màn-hình-chờ-sleep-screen)
      - [Cài đặt bìa sách](#cài-đặt-bìa-sách)
      - [Hình ảnh tùy chỉnh](#hình-ảnh-tùy-chỉnh)
      - [Hình ảnh phủ trong suốt (Transparent overlay)](#hình-ảnh-phủ-trong-suốt-transparent-overlay)
    - [3.8 Phông chữ tùy chỉnh (Thẻ nhớ SD)](#38-phông-chữ-tùy-chỉnh-thẻ-nhớ-sd)
  - [4. Chế độ đọc sách](#4-chế-độ-đọc-sách)
    - [Lật trang](#lật-trang)
    - [Điều hướng chương](#điều-hướng-chương)
    - [Tự động lật trang](#tự-động-lật-trang)
    - [Lật trang bằng độ nghiêng (chỉ trên X3)](#lật-trang-bằng-độ-nghiêng-chỉ-trên-x3)
    - [Liên kết và chú thích cuối trang](#liên-kết-và-chú-thích-cuối-trang)
    - [Tra từ điển](#tra-từ-điển)
    - [Điều hướng hệ thống](#điều-hướng-hệ-thống)
    - [Ngôn ngữ hỗ trợ](#ngôn-ngữ-hỗ-trợ)
  - [5. Menu đọc sách](#5-menu-đọc-sách)
    - [5.1 Chọn chương](#51-chọn-chương)
    - [5.2 Dấu trang (Bookmarks)](#52-dấu-trang-bookmarks)
    - [5.3 Đoạn trích & Tô sáng (Clippings and Highlights)](#53-đoạn-trích--tô-sáng-clippings-and-highlights)
  - [6. Giới hạn hiện tại & Lộ trình phát triển](#6-giới-hạn-hiện-tại--lộ-trình-phát-triển)
  - [7. Xử lý sự cố & Thoát khỏi vòng lặp khởi động](#7-xử-lý-sự-cố--thoát-khỏi-vòng-lặp-khởi-động)

---

## 1. Tổng quan phần cứng

Thiết bị sử dụng các phím bấm tiêu chuẩn trên Xteink X4 (theo bố cục mặc định tương tự firmware gốc của nhà sản xuất):

### Bố cục phím bấm

| Vị trí         | Các phím bấm                                         |
| -------------- | ---------------------------------------------------- |
| **Cạnh dưới**  | **Back** (Quay lại), **Confirm** (Xác nhận/Menu), **Left** (Trái), **Right** (Phải) |
| **Cạnh phải**  | **Power** (Nguồn), **Side Up** (Cạnh trên), **Side Down** (Cạnh dưới), **Reset** |

Bố cục phím bấm có thể tùy chỉnh linh hoạt trong **[Cài đặt Điều khiển](#363-điều-khiển-controls)**.

### Chụp ảnh màn hình

Khi nhấn đồng thời phím **Power** và phím cạnh dưới (**Side Down**), máy sẽ chụp ảnh màn hình hiện tại và lưu vào thư mục `screenshots/` trên thẻ nhớ.

Ngoài ra, trong khi đọc sách, bạn có thể nhấn phím **Confirm** để mở menu đọc sách và chọn **Take screenshot** (Chụp ảnh màn hình).

### Trung tâm điều khiển và Đèn nền

Trung tâm điều khiển (Control Center) có sẵn trên tất cả các thiết bị có màn hình cảm ứng. Các thiết bị có đèn nền (frontlight) cũng sẽ hiển thị thanh chỉnh sáng. Mẫu X4 Pro hỗ trợ điều chỉnh cả độ sáng và độ ấm; Paper Mono chỉ hỗ trợ chỉnh độ sáng.

* **Mở bảng điều khiển:** Vuốt từ cạnh trên màn hình xuống từ hầu hết các màn hình (Home, Duyệt file, Đang đọc sách,...). Bạn cũng có thể chạm vào thanh trạng thái trên Home, Duyệt file hoặc Cài đặt. Trên các thiết bị có đèn nền, kéo thanh trượt độ sáng (và thanh trượt độ ấm nếu có) để điều chỉnh trực tiếp, hoặc chạm vào biểu tượng mặt trời để bật/tắt nhanh.
* **Các nút điều khiển nhanh:** Bảng chứa một hàng biểu tượng: mặt trăng để bật chế độ ban đêm (night mode), mũi tên tròn để làm mới màn hình (refresh), chữ **T** gạch chân để đổi hướng đọc, và biểu tượng con trỏ Settings Controls để bật/tắt cảm ứng khi đọc sách. Trên các bản build hỗ trợ Bluetooth, nút thứ năm cho phép bật/tắt thiết bị lật trang Bluetooth. Biểu tượng bị gạch chéo nghĩa là đang tắt. Chữ **T** sẽ xoay theo hướng đọc đã chọn. Biểu tượng đặc nghĩa là đang bật; biểu tượng viền ngoài nghĩa là đang tắt. Nút làm mới và nút hướng luôn có viền ngoài. Tắt cảm ứng đọc sách vẫn cho phép sử dụng bảng điều khiển này. Kết nối lại Bluetooth tuân theo quy tắc thông thường sau khi bạn đóng bảng; việc bật nó không ghép đôi remote mới.
* **Phím tắt bật/tắt:** Trên thiết bị có đèn nền, đặt **Settings → Controls → Power button → Double click** thành **Frontlight** (mặc định trên X4 Pro và EEGO A4), sau đó nhấn đúp phím **Power** để bật hoặc tắt đèn nền ngay lập tức mà không cần mở bảng điều khiển.

> [!NOTE]
> Độ sáng và độ ấm của đèn nền cố ý không đưa vào **[Cài đặt Hiển thị](#361-hiển-thị-display)** — bảng vuốt xuống là nơi duy nhất để chỉnh chúng. Trạng thái bật/tắt cũng có thể chuyển đổi bằng thao tác nhấn đúp phím Power như trên.

Nếu đèn nền không sáng lại sau khi máy thức dậy từ chế độ ngủ, hãy kiểm tra tùy chọn **Restore Light on Wake** trong **[Cài đặt Hiển thị](#361-hiển-thị-display)** (mặc định là Bật). Việc tắt tùy chọn này hữu ích nếu bạn muốn đèn giữ nguyên trạng thái tắt khi thức dậy để tự bật bằng tay — nhưng rất dễ quên mất là bạn đã đổi cài đặt này.

---

## 2. Nguồn & Khởi động

### Bật / Tắt nguồn

Để bật hoặc tắt thiết bị, **nhấn và giữ phím Power trong khoảng nửa giây**.
Trong phần **[Cài đặt Điều khiển](#363-điều-khiển-controls)**, bạn có thể chỉnh nút nguồn tắt máy bằng một lần nhấn ngắn thay vì nhấn giữ.

Để khởi động lại thiết bị (ví dụ sau khi cập nhật firmware hoặc nếu máy bị đơ), hãy nhấn rồi nhả nút Reset, sau đó nhanh chóng nhấn giữ phím Power trong vài giây.

### Khởi động lần đầu

Khi bật nguồn thiết bị lần đầu, bạn sẽ được đưa đến màn hình **[Home](#31-màn-hình-chính-home)**.

> [!NOTE]
> Ở các lần khởi động tiếp theo, firmware sẽ tự động mở lại cuốn sách bạn đang đọc dở gần nhất.

---

## 3. Các màn hình giao diện

### 3.1 Màn hình chính (Home)

Màn hình chính là điểm truy cập trung tâm của firmware. Từ đây bạn có thể mở **[Chế độ đọc sách](#4-chế-độ-đọc-sách)** với cuốn sách vừa đọc gần nhất, vào **[Duyệt tập tin](#33-màn-hình-duyệt-tập-tin-browse-files)**, **[Thư viện](#34-màn-hình-thư-viện-library)**, **[Truyền tập tin](#35-màn-hình-truyền-tập-tin-file-transfer)** hoặc **[Cài đặt](#36-cài-đặt-settings)**.

Khi có tiến trình đọc sách đã lưu, giao diện Lyra sẽ hiển thị phần trăm và thanh tiến độ ngay bên dưới tiêu đề sách và tên tác giả.

Để hiển thị tên chủ sở hữu tùy chỉnh trên thanh trên cùng của màn hình Home, hãy đặt một tệp văn bản thuần có tên `owner.txt` tại thư mục gốc của thẻ nhớ SD (hoặc tại `/.crosspoint/owner.txt`) chứa tên bạn muốn hiển thị (tối đa 31 ký tự, mã hóa UTF-8).

### 3.2 Chế độ đọc sách

Xem mục [Chế độ đọc sách](#4-chế-độ-đọc-sách) bên dưới để biết thêm chi tiết.

### 3.3 Màn hình Duyệt tập tin (Browse Files)

Màn hình Browse Files hoạt động như một trình quản lý tệp và thư mục. Đường dẫn đầy đủ đến thư mục hiện tại được hiển thị ở đầu màn hình. Phần mở rộng của tệp được hiển thị bên cạnh tên tệp (bạn có thể tắt **Show File Extensions** trong **Settings → System** để tên hiển thị dài hơn; các tệp chỉ khác phần mở rộng như `book.epub` và `book.xtc` lúc đó trông sẽ giống nhau), và các thư mục được đặt trong dấu ngoặc vuông (ví dụ `[ten-thu-muc]`). Các thư mục ẩn (bắt đầu bằng dấu `.`) cũng được hiển thị.

* **Di chuyển danh sách:** Dùng phím **Left** (hoặc **Side Up**) và **Right** (hoặc **Side Down**) để di chuyển con trỏ lên xuống qua các thư mục và sách. Bạn cũng có thể nhấn giữ các phím này để cuộn nguyên trang lên hoặc xuống.
* **Mở mục đã chọn:** Nhấn **Confirm** để mở thư mục hoặc bắt đầu đọc sách đã chọn. Chọn tệp ảnh `.bmp` sẽ mở trình xem ảnh.
* **Xóa tệp hoặc thư mục:** Nhấn giữ rồi nhả phím **Confirm** để xóa tệp hoặc thư mục đang chọn. Máy sẽ hiển thị tùy chọn xác nhận hoặc hủy. Bạn cũng có thể chọn nhiều tệp để xóa cùng lúc.
* **Đổi tên hoặc Di chuyển:** Bạn có thể đổi tên tệp hoặc chuyển tệp sang thư mục khác ngay trong màn hình duyệt tập tin.

### 3.4 Màn hình Thư viện (Library)

Thư viện lập chỉ mục lên tới 4.096 cuốn sách được hỗ trợ trên thẻ nhớ SD, hiển thị tiêu đề và tác giả mà bạn không cần phải nhớ vị trí thư mục của chúng. Ba tab cung cấp các chế độ xem khác nhau. Mũi tên cạnh tab đang kích hoạt hiển thị chiều sắp xếp:

- **Recent (Gần đây):** Hiển thị các sách bạn vừa mở gần nhất (tối đa 10 cuốn) ở trên cùng, tiếp theo là phần còn lại của thư viện sắp xếp theo thời điểm tệp được đưa vào thẻ nhớ. Hướng xuống hiển thị mới nhất trước; hướng lên hiển thị cũ nhất trước mà không ghim sách đã mở lên đầu. Khi bật **Hide New Files in Recent**, tab chỉ liệt kê các sách bạn đã từng mở. Cài đặt này chỉ áp dụng khi không có tìm kiếm nào đang hoạt động.
- **Title (Tiêu đề):** Nhóm sách theo chữ cái đầu của tiêu đề. Hướng lên xếp từ A-Z và hướng xuống xếp từ Z-A. Các tiêu đề bắt đầu bằng số hoặc dấu câu nằm dưới nhóm `#`.
- **Author (Tác giả):** Nhóm sách theo tên tác giả, sắp xếp A-Z hoặc Z-A.

`My Clippings.txt` và `crash_report.txt` không được liệt kê trong Thư viện mà nằm trong trình duyệt tệp.

Trên thiết bị chỉ có phím bấm:
- Dùng **Up/Down** hoặc **Left/Right** để di chuyển từng dòng. Giữ một hướng để cuộn từng trang.
- Nhấn **Confirm** để mở sách đã chọn.
- Nhấn **Back** từ danh sách sách để chuyển tiêu điểm lên các tab. Khi các tab đang được chọn, nhấn **Confirm** để chuyển tab tiếp theo, giữ **Confirm** để đảo chiều sắp xếp, nhấn **Up** để mở Tìm kiếm (Search), hoặc nhấn **Down** để trở lại danh sách.
- Trong tab Recent, giữ **Confirm** vào một cuốn sách để mở menu tùy chọn: **Open** (Mở), **Remove from Recents** (Xóa khỏi danh sách gần đây), **Delete** (Xóa tệp), và **Refresh Library** (Làm mới thư viện).
- Trong tab Title hoặc Author, giữ **Confirm** để thu gọn danh sách thành danh sách nhóm chữ cái/tác giả.

Trên thiết bị cảm ứng, chạm trực tiếp vào các tab, sách và biểu tượng Tìm kiếm. Chạm lại vào tab đang mở để đảo chiều sắp xếp. Vuốt lên/xuống để cuộn trang. Nhấn giữ vào một cuốn sách để mở menu tùy chọn hoặc thu gọn nhóm. Vuốt ngang một hàng để hiện nút xóa. Chạm vào biểu tượng làm mới ở thanh tiêu đề để quét lại chỉ mục.

Chỉ mục được tạo tự động trong lần đầu tiên Thư viện được mở và được xây dựng lại sau khi thêm sách qua truyền tập tin. Tùy chọn **Settings → Library → Refresh Library** cho phép quét lại bất cứ lúc nào. Cài đặt **Use Book Metadata** quyết định việc chỉ mục đọc tiêu đề/tác giả từ nội dung bên trong sách hay dùng tên tệp.

### 3.5 Màn hình Truyền tập tin (File Transfer)

Màn hình Truyền tập tin cho phép tải lên và quản lý tệp trên thiết bị qua mạng. Khi vào màn hình này, bạn chọn **Join a Network** (Kết nối mạng Wi-Fi có sẵn), **Calibre Wireless** (Kết nối Calibre không dây), hoặc **Create Hotspot** (Phát điểm phát sóng Wi-Fi từ máy đọc sách). Sau đó máy sẽ khởi chạy máy chủ web tương ứng.

Màn hình cũng có mục **OPDS Browser** để duyệt các kho sách OPDS; nếu chưa cấu hình máy chủ nào, nó sẽ mở danh sách máy chủ để bạn thêm mới (xem [Máy chủ OPDS](#365-máy-chủ-opds-nhiều-thư-viện)). Khi hệ thống plugin bị tắt và đã có máy chủ được cấu hình, mục OPDS Browser sẽ nằm ngay trên màn hình Home.

Giao diện web cũng hỗ trợ **WebDAV**, cho phép bạn gắn máy đọc sách như một ổ đĩa mạng trên máy tính để quản lý tệp trực tiếp từ trình quản lý tệp (File Explorer / Finder).

Đường dẫn tải xuống các tệp đã có trên máy cũng xuất hiện trên giao diện web, giúp bạn lấy sách hoặc ảnh chụp màn hình qua Wi-Fi mà không cần cắm cáp.

Chỉ số cường độ tín hiệu Wi-Fi (dBm) được hiển thị trực tiếp trên màn hình thiết bị trong suốt phiên làm việc.

> [!TIP]
> Người dùng nâng cao có thể quản lý tệp tự động qua dòng lệnh bằng `curl`. Xem [tài liệu web server](./docs/webserver.md) để biết chi tiết.
> [!TIP]
> Nếu các tệp EPUB của bạn gặp lỗi định dạng, bạn có thể chạy công cụ **EPUB Optimizer** tích hợp sẵn ngay trên thiết bị để chuẩn hóa và tối ưu lại sách giúp hiển thị mượt mà hơn.

### 3.5.1 Truyền sách không dây từ Calibre

CrossPoint hỗ trợ nhận sách trực tiếp từ phần mềm Calibre trên máy tính thông qua plugin thiết bị CrossPoint Reader.

#### Cài đặt plugin trong Calibre
1. Truy cập https://github.com/crosspoint-reader/calibre-plugins/releases để tải bản phát hành mới nhất của plugin `crosspoint_reader`.
2. Tải về tệp `.zip`.
3. Mở Calibre → Preferences (Tùy chọn) → Plugins → Load plugin from file (Tải plugin từ tệp) → Chọn tệp zip vừa tải.
4. Khởi động lại Calibre.

#### Cấu hình plugin CrossPoint trong Calibre
1. Trong Calibre chọn Preferences.
2. Chọn Plugins.
3. Tìm kiếm từ khóa "crosspoint".
4. Bấm vào "Customize plugin".
5. Điền địa chỉ IP của máy đọc sách vào ô "Host".
6. Giữ nguyên các thiết lập khác.
7. [Tùy chọn] Chỉnh sửa "Upload path" nếu muốn gửi sách vào thư mục con khác ngoài thư mục gốc `/`. Ví dụ: `/mybooks`.
8. Khởi động lại Calibre.

<img width="420" height="385" alt="Calibre Plugin Config" src="https://github.com/user-attachments/assets/01fc7e33-a9a7-48ba-9e26-2e68d1f9daec" />

#### Tải sách lên thiết bị
1. Trên máy đọc sách: Vào **File Transfer -> Calibre Wireless**, rồi kết nối vào cùng mạng Wi-Fi với máy tính.
2. Trên Calibre: Chọn một hoặc nhiều cuốn sách.
3. Nhấp chuột phải vào các sách đã chọn.
4. Chọn "Send to Device" (Gửi đến thiết bị) > "Send to main memory" (Gửi vào bộ nhớ chính).

Plugin sẽ kết nối đến máy đọc sách, tự động tạo thư mục theo tên tác giả trong thư mục gốc (hoặc thư mục bạn đã chỉ định), rồi chép sách vào đó.

<img width="783" height="310" alt="Calibre Send" src="https://github.com/user-attachments/assets/741b0909-2e1d-4f16-8af0-2c43fbda5ce6" />

#### Xóa sách
Không thể xóa sách khỏi máy đọc sách thông qua Calibre. Hãy dùng giao diện web hoặc trình duyệt file trên máy để xóa.

---

### 3.6 Cài đặt (Settings)

Các cài đặt được nhóm thành: **System** (Hệ thống), **Display** (Hiển thị), **Reader** (Trình đọc), **Controls** (Điều khiển), **Library** (Thư viện), và **Connectivity** (Kết nối).

#### 3.6.1 Hiển thị (Display)

- **Sleep Screen (Màn hình chờ):** Chọn hình ảnh hiển thị khi máy vào chế độ ngủ:
  - "Dark" (Mặc định) - Màn hình logo CrossPoint nền tối
  - "Light" - Màn hình logo CrossPoint nền trắng sáng
  - "Custom" - Ảnh tùy chỉnh từ thẻ nhớ SD (xem mục [Màn hình chờ](#37-màn-hình-chờ-sleep-screen))
  - "Cover" - Ảnh bìa của cuốn sách đang đọc
  - "None" - Màn hình trống hoàn toàn
  - "Cover + Custom" - Hiện bìa sách khi đang đọc dở, nếu không có sách thì hiện ảnh tùy chỉnh
  - "Quick resume" - Nội dung trang sách cuối cùng được giữ nguyên trên màn hình và có biểu tượng mặt trăng nhỏ ở góc. Khi đánh thức, bạn có thể đọc tiếp ngay lập tức mà không phải chờ tải lại sách.
  - "Transparent" - Một ảnh lớp phủ trong suốt vẽ đè lên màn hình hiện tại
  - "Cover + Transparent" - Lớp phủ trong suốt vẽ đè lên bìa cuốn sách mở gần nhất
- **Sleep Screen Cover Mode (Chế độ vừa vặn ảnh bìa):**
  - "Fit" (Mặc định) - Thu phóng vừa vặn căn giữa màn hình, thêm viền trắng nếu cần
  - "Crop" - Cắt bớt các cạnh để lấp đầy toàn bộ màn hình
- **Sleep Screen Cover Filter (Bộ lọc ảnh bìa):**
  - "None" (Mặc định) - Chuyển sang ảnh thang độ xám (grayscale)
  - "Contrast" - Ảnh đen trắng tương phản cao không qua thang độ xám
  - "Inverted" - Đảo ngược màu đen trắng
- **Quick Resume on Timeout:** Tự động dùng màn hình "Quick Resume" khi thiết bị tự ngủ do không tương tác sau một khoảng thời gian.
- **Status Bar (Thanh trạng thái):** Cấu hình thanh trạng thái trong khi đọc:
  - "None" - Tắt thanh trạng thái
  - "No Progress" - Hiện thanh trạng thái nhưng không hiện tiến trình
  - "Full w/ Percentage" - Hiện thanh trạng thái kèm tiến trình dạng phần trăm (%)
  - "Full w/ Book Bar" - Hiện thanh trạng thái kèm thanh tiến trình cả cuốn sách
  - "Book Bar Only" - Chỉ hiện thanh tiến trình cuốn sách
  - "Full w/ Chapter Bar" - Hiện thanh trạng thái kèm thanh tiến trình từng chương
- **Hide Battery % (Ẩn phần trăm pin):**
  - "Never" (Mặc định) - Luôn hiển thị % pin
  - "In Reader" - Ẩn % pin khi đang đọc sách, hiện ở các màn hình khác
  - "Always" - Luôn ẩn % pin (chỉ hiện biểu tượng pin)
- **Refresh Frequency (Tần suất làm mới màn hình):** Số trang lật trước khi màn hình thực hiện quét đầy đủ (full refresh) để xóa vệt mực (ghosting): mỗi 1, 5, 10, 15, hoặc 30 trang.
- **UI Theme (Chủ đề giao diện):**
  - "Classic" - Giao diện Crosspoint cổ điển
  - "Lyra" - Giao diện hiện đại với các góc bo tròn và biểu tượng menu
  - "Lyra Extended" - Tương tự Lyra nhưng hiển thị 3 cuốn sách trên màn hình Home
  - "RoundedRaff" - Giao diện bo tròn với phong cách đồ họa riêng
- **UI Font (Phông chữ giao diện):** Chọn phông chữ cho menu, tiêu đề thư viện và giao diện hệ thống.
- **Sunlight Fading Fix:** Bản vá phần mềm chống mờ mực khi sử dụng ngoài trời nắng gắt (dành riêng cho các mẫu X4 màu trắng).

#### 3.6.2 Trình đọc (Reader)

- **Reader Font Family (Phông chữ đọc sách):** Chọn phông chữ để đọc sách (mặc định là "Noto Sans" hoặc các phông chữ cài thêm từ thẻ nhớ).
- **Reader Font Size (Cỡ chữ):** Chọn kích thước phông chữ (12, 14, 16, 18 pt hoặc theo các cỡ của tệp `.cpfont`).
- **Reader Line Spacing (Khoảng cách dòng):** Khoảng cách giữa các dòng theo tỷ lệ: 0%, +10%, +20% (mặc định), +30%, +45%, +60%, hoặc +75%.
- **Reader Screen Margin (Lề màn hình):** Độ rộng lề trang từ 5 đến 40 pixel (bước nhảy 5px).
- **Reader Paragraph Alignment (Căn lề đoạn văn):** Căn lề đoạn văn: "Justified" (Căn đều 2 bên - mặc định), "Left" (Căn trái), "Center" (Căn giữa), "Right" (Căn phải).
- **Embedded Style (Kiểu nhúng):** Bật/tắt việc áp dụng định dạng HTML và CSS nhúng gốc của tệp EPUB.
- **Hyphenation (Dấu gạch nối từ):** Bật/tắt tự động ngắt từ có dấu gạch nối khi xuống dòng.
- **Reading Orientation (Hướng đọc):** Đặt hướng xoay màn hình: "Portrait" (Dọc đứng), "Landscape CW" (Ngang xoay theo chiều kim đồng hồ), "Inverted" (Dọc ngược), "Landscape CCW" (Ngang xoay ngược chiều kim đồng hồ).
- **Extra Paragraph Spacing (Khoảng cách đoạn văn):**
  - "ON" - Thêm một khoảng cách dòng trống giữa các đoạn văn
  - "OFF" - Không thêm khoảng trống, thụt lề dòng đầu câu
- **Dictionary (Từ điển):** Chọn từ điển StarDict trên thẻ nhớ để tra từ khi đọc, hoặc "None" để tắt.
- **Text Anti-Aliasing (Khử răng cưa chữ):** Làm mịn viền chữ bằng thang độ xám (lật trang sẽ chậm hơn một chút).
- **Images (Hình ảnh):** Cách hiển thị ảnh nhúng trong EPUB:
  - "Display" (Mặc định) - Hiển thị ảnh đầy đủ thang độ xám.
  - "Placeholder" - Chỉ hiện văn bản thay thế (alt-text).
  - "Suppress" - Bỏ qua hoàn toàn không hiển thị ảnh.
  - "Black & White" - Chuyển ảnh thành dạng chấm hạt đen trắng (dither), giúp tốc độ lật trang nhanh như trang chữ thường.
- **Focus Reading (Đọc tập trung):** In đậm phần đầu của mỗi từ để tạo điểm neo thị giác (tương tự Bionic Reading), giúp đọc nhanh và tập trung hơn.

#### 3.6.3 Điều khiển (Controls)

- **Remap Front Buttons:** Tùy biến chức năng từng phím bấm ở cạnh dưới.
- **Layout (reader only):** Hoán đổi vị trí nút trang trước/sau ở cạnh bên thành "Prev/Next" hoặc "Next/Prev", hoặc tắt hẳn.
- **Orient Front Buttons / Side Buttons:** Tự động đảo chiều các phím bấm theo hướng xoay màn hình đọc sách.
- **Page turn long press (Nhấn giữ nút lật trang):** Đặt hành động khi nhấn giữ nút lật trang: "Off" (Tắt), "Chapter Skip" (Chuyển chương), hoặc "Orientation Change" (Xoay hướng màn hình).
- **Menu long press (Nhấn giữ nút Menu/Confirm):** Chọn chức năng khi nhấn giữ phím Confirm lúc đang đọc:
  - "Bookmark" (Mặc định) - Đánh dấu trang hiện tại
  - "CrossPoint Sync" - Khởi chạy đồng bộ tiến trình ngay lập tức
  - "Dictionary" - Bắt đầu chế độ chọn từ để tra từ điển
  - "Create Clipping" - Bắt đầu chọn đoạn văn bản để trích dẫn/tô sáng
  - "Disabled" - Tắt tính năng nhấn giữ
- **Short click (Nhấn nhanh nút nguồn):** "Ignore" (Bỏ qua - mặc định), "Sleep" (Đưa máy vào chế độ ngủ), "Page Turn" (Lật trang tiếp), "Links and Footnotes" (Mở chọn liên kết/chú thích), "Refresh" (Làm mới toàn bộ màn hình để khử vệt mực).

#### 3.6.4 Hệ thống (System)

- **Time to Sleep:** Thời gian chờ trước khi máy tự ngủ: 1, 3, 5, 10 (mặc định), 15 hoặc 30 phút.
- **Wi-Fi Networks:** Quản lý kết nối mạng Wi-Fi.
- **Bluetooth Page Turner:** Kết nối và gán phím cho remote lật trang Bluetooth.
- **CrossPoint Sync:** Thiết lập đồng bộ tiến trình đọc với máy chủ CrossPoint Sync hoặc KOSync.
- **OPDS Servers:** Quản lý các kho sách trực tuyến OPDS.
- **Clear Reading Cache:** Xóa bộ nhớ đệm phân trang sách trên thẻ nhớ.
- **Check for updates:** Kiểm tra và nâng cấp firmware qua Wi-Fi (hoặc đặt tệp `firmware.bin` vào thẻ nhớ).
- **Plugins (Bật/Tắt Plugin):** Cài đặt bật hoặc tắt hệ sinh thái plugin từ thẻ nhớ SD.
- **Language (Ngôn ngữ):** Chọn ngôn ngữ giao diện (hỗ trợ Tiếng Việt và hơn 30 ngôn ngữ khác).
- **Manage Fonts (Quản lý phông chữ):** Duyệt, tải về và quản lý các phông chữ cài trên thẻ nhớ.

#### 3.6.5 Máy chủ OPDS (Nhiều thư viện)

CrossPoint hỗ trợ lưu nhiều máy chủ OPDS:
1. Vào **Settings -> Connectivity -> OPDS Servers**.
2. Chọn **Add Server** để thêm mới hoặc chọn máy chủ đã có để chỉnh sửa.
3. Điền **Server Name** (Tên hiển thị), **OPDS Server URL** (Đường dẫn OPDS, ví dụ thư viện Calibre thường kết thúc bằng `/opds`), và **Username / Password** nếu có.
4. Bạn có thể lưu tối đa 8 máy chủ OPDS.

#### 3.6.6 Cài đặt qua Web (Wi-Fi + OPDS)
Khi bật chế độ **File Transfer**, bạn có thể dùng trình duyệt máy tính truy cập `http://<ip-thiết-bị>/settings` để thêm, sửa, xóa mạng Wi-Fi và máy chủ OPDS cực kỳ nhanh chóng bằng bàn phím máy tính.

#### 3.6.7 Thiết lập nhanh Đồng bộ KOReader

CrossPoint có thể đồng bộ tiến trình đọc sách hai chiều với các máy chủ tương thích KOReader Sync:

##### Lựa chọn A: Máy chủ CrossPoint Sync (`sync.crosspointreader.com`, mặc định)
1. Trên máy đọc sách: Vào **Settings -> Connectivity -> CrossPoint Sync**.
2. Điền **Username** và **Password** tùy chọn.
3. Để trống ô **Sync Server URL** (máy sẽ tự dùng máy chủ miễn phí `https://sync.crosspointreader.com`).
4. Chọn **Server Type** là **CrossPoint**.
5. Trên thiết bị đầu tiên, chọn **Sign Up** để tạo tài khoản trực tiếp từ máy. Trên các thiết bị khác, chỉ cần điền đúng thông tin và chọn **Authenticate**.

##### Lựa chọn B: Máy chủ KOReader công cộng cũ (`sync.koreader.rocks`)
1. Điền **Sync Server URL** là `https://sync.koreader.rocks`.
2. Chọn **Server Type** là **KoSync**.
3. Điền tài khoản KOReader Sync của bạn rồi chọn **Authenticate**.

##### Lựa chọn C: Máy chủ tự lưu trữ (Docker Compose)
Bạn có thể tự chạy máy chủ sync riêng bằng Docker với ảnh `koreader/kosync:latest`. Cấu hình cổng `7200` (HTTPS) hoặc `17200` (HTTP) và trỏ URL trên thiết bị tới địa chỉ máy chủ nội bộ của bạn.

##### Đồng bộ trong khi đọc sách
Khi đang đọc sách, nhấn **Confirm** để mở menu đọc rồi chọn **Sync Progress**.
- **Sync Clippings:** Tự động đồng bộ các đoạn trích dẫn và tô sáng (chỉ hỗ trợ trên máy chủ CrossPoint).
- **Sync On Sleep:** Tự động kết nối Wi-Fi và đồng bộ tiến trình đọc mỗi khi bạn đưa máy vào chế độ ngủ.
- **Smart sync:** Tự động phát hiện và áp dụng vị trí đọc mới nhất giữa máy và máy chủ mà không cần hỏi lại nhiều lần.

---

### 3.7 Màn hình chờ (Sleep Screen)

| Chế độ | Hành vi |
| ------ | ------- |
| **Dark** (Mặc định) | Logo CrossPoint trên nền đen |
| **Light** | Logo CrossPoint trên nền trắng |
| **Custom** | Hình ảnh tùy chỉnh từ thư mục `.sleep/` trên thẻ nhớ SD |
| **Cover** | Bìa của cuốn sách đang mở |
| **Cover + Custom** | Hiện bìa sách khi đang đọc; hiện ảnh tùy chỉnh khi ở màn hình ngoài |
| **Transparent** | Lớp phủ ảnh BMP/PNG vẽ đè lên nội dung màn hình hiện tại |
| **Cover + Transparent** | Lớp phủ trong suốt vẽ đè lên trên ảnh bìa sách |
| **None** | Màn hình trắng hoàn toàn |

#### Hình ảnh tùy chỉnh
- **Nhiều hình ngẫu nhiên:** Tạo thư mục `.sleep` ở thư mục gốc thẻ nhớ SD và chép các tệp ảnh `.bmp` vào đó. Mỗi lần máy ngủ sẽ chọn ngẫu nhiên một ảnh.
- **Một hình cố định:** Đặt tệp ảnh có tên `sleep.bmp` ngay tại thư mục gốc thẻ nhớ.
- **Độ phân giải khuyên dùng:**
  - X4: `480x800` pixel
  - X3: `528x792` pixel

#### Hình ảnh phủ trong suốt (Transparent overlay)
Tạo thư mục `.sleep-overlay` ở thư mục gốc thẻ nhớ và đặt các tệp `.png` hoặc `.bmp` 32-bit có kênh alpha vào đó.

---

### 3.8 Phông chữ tùy chỉnh (Thẻ nhớ SD)

CrossPoint hỗ trợ cài thêm phông chữ từ thẻ nhớ để đọc sách có dấu tiếng Việt đẹp hơn hoặc thêm các chữ tượng hình tiếng Trung, Nhật, Hàn (CJK):
- Thiết bị có RAM mở rộng (như dòng S3) có thể chép trực tiếp các tệp `.ttf`, `.otf`, `.ttc` vào thư mục `/fonts/` hoặc `/.fonts/`.
- Thiết bị chỉ có bộ nhớ trong cơ bản (ESP32-C3 như X3, X4) dùng các tệp phông chữ định dạng `.cpfont`.

Có 3 cách cài phông chữ:
1. **Tải trực tiếp qua Wi-Fi:** Vào **Settings -> Reader -> Manage Fonts**, duyệt các bộ phông có sẵn và bấm tải về qua Wi-Fi.
2. **Tải lên qua giao diện Web:** Bật **File Transfer**, mở trình duyệt vào tab **Fonts** và tải thư mục phông lên.
3. **Chép thủ công vào thẻ nhớ:** Tải các bộ phông `.cpfont` từ kho [crosspoint-fonts](https://github.com/crosspoint-reader/crosspoint-fonts) và chép vào thư mục `/fonts/` trên thẻ nhớ.

---

## 4. Chế độ đọc sách

Khi mở một cuốn sách, các phím bấm sẽ chuyển sang chế độ phục vụ việc đọc:

### Lật trang

| Thao tác | Phím bấm |
| -------- | -------- |
| **Trang trước** | Nhấn **Left** _hoặc_ **Side Up** |
| **Trang tiếp** | Nhấn **Right** _hoặc_ **Side Down** |

Bạn có thể đảo chiều các phím cạnh bên trong **Settings → Controls**. Nếu cài đặt **Short click** là "Page Turn", bạn cũng có thể lật trang bằng cách nhấn nhẹ phím Nguồn.

### Điều hướng chương
* **Chương tiếp theo:** Nhấn và **giữ** phím **Right** (hoặc **Side Down**) một lúc rồi nhả ra.
* **Chương trước:** Nhấn và **giữ** phím **Left** (hoặc **Side Up**) một lúc rồi nhả ra.

### Tự động lật trang
Cho phép máy tự động sang trang sau mỗi khoảng thời gian định trước (tính theo số trang mỗi phút - Pages Per Minute), giúp đọc sách rảnh tay. Bật tính năng này trong **Reader Menu**.

### Lật trang bằng độ nghiêng (chỉ trên X3)
Trên mẫu **Xteink X3**, cảm biến con quay hồi chuyển tích hợp cho phép lật trang chỉ bằng thao tác nghiêng nhẹ thiết bị sang trái hoặc phải. Kích hoạt trong phần Cài đặt Điều khiển.

### Liên kết và chú thích cuối trang
Chạm trực tiếp vào liên kết trên màn hình cảm ứng, hoặc chọn "Links and Footnotes" từ Reader Menu để duyệt các liên kết chú thích. Nhấn **Back** để quay lại vị trí đọc trước khi bấm vào chú thích.

### Tra từ điển
Từ trên trang sách có thể tra nhanh bằng từ điển StarDict offline lưu trên thẻ nhớ. Chép thư mục từ điển vào `/dictionaries/`, chọn từ điển trong **Settings → Reader → Dictionary**, sau đó chọn **Look Up** trong Reader Menu (hoặc nhấn giữ phím Confirm).

### Điều hướng hệ thống
* **Về màn hình chính (Home):** Nhấn phím **Back** để đóng sách và về trang Home.
* **Về trình duyệt tệp:** Nhấn và **giữ** phím **Back** để đóng sách và mở lại màn hình Browse Files.
* **Mở Menu đọc sách:** Nhấn phím **Confirm**.

---

## 5. Menu đọc sách

Khi đang đọc sách, nhấn phím **Confirm** để mở menu điều khiển nhanh:

- **Select Chapter (Chọn chương):** Mở mục lục sách để nhảy nhanh tới chương mong muốn.
- **Links and Footnotes:** Chọn liên kết và chú thích có trong trang hiện tại.
- **Look Up (Tra từ):** Chọn một từ trên trang để xem định nghĩa từ điển.
- **Bluetooth Page Turner:** Bật/tắt remote lật trang Bluetooth.
- **Create Clipping (Tạo trích dẫn):** Chọn một đoạn văn bản để đánh dấu tô sáng và lưu trích dẫn.
- **View Clippings (Xem trích dẫn):** Xem lại toàn bộ các đoạn trích dẫn đã lưu của cuốn sách này.
- **Reading Orientation (Xoay màn hình):** Chuyển đổi hướng xoay màn hình đọc ngay lập tức.
- **Auto Turn:** Bật tự động lật trang và điều chỉnh tốc độ lật.
- **Go to % (Nhảy đến %):** Nhập số phần trăm để nhảy nhanh đến vị trí bất kỳ trong sách.
- **Take screenshot:** Chụp ảnh màn hình trang sách và lưu vào thư mục `screenshots/`.
- **Show page as QR:** Hiển thị mã QR mã hóa vị trí đọc hiện tại.
- **Go Home:** Đóng sách và quay lại màn hình chính.
- **Sync Progress:** Thực hiện đồng bộ tiến trình đọc với máy chủ ngay lập tức.
- **Delete Book Cache:** Xóa bộ đệm bố cục của cuốn sách này để buộc máy phân tích lại từ đầu ở lần mở kế tiếp.

### 5.1 Chọn chương
1. Dùng phím **Left/Right** (hoặc phím cạnh bên) để cuộn đến chương cần đọc.
2. Nhấn **Confirm** để chuyển tới chương đó.
3. Nhấn **Back** để hủy và quay lại trang sách hiện tại.

### 5.2 Dấu trang (Bookmarks)
- **Tạo dấu trang nhanh:** Nhấn giữ phím **Confirm** khoảng nửa giây khi đang đọc. Một thông báo nhỏ sẽ xuất hiện xác nhận đã lưu dấu trang.
- **Mở hoặc Xóa dấu trang:** Nhấn **Confirm** mở menu đọc → chọn **Bookmarks**. Chọn dấu trang cần đến và bấm **Confirm**. Để xóa dấu trang, nhấn giữ **Confirm** khoảng 0.7 giây rồi chọn xác nhận.

### 5.3 Đoạn trích & Tô sáng (Clippings and Highlights)
Chọn **Create Clipping** từ menu đọc, di chuyển đến từ đầu tiên rồi nhấn **Confirm**. Tiếp tục di chuyển đến từ cuối cùng và nhấn **Select** để chọn **Look Up** (Tra từ), **Clip** (Lưu trích dẫn), hoặc **Bookmark** (Đánh dấu).

Trên màn hình cảm ứng: Chạm giữ một từ bất kỳ để hiện con trỏ chọn văn bản. Kéo hai đầu con trỏ để bao trọn đoạn cần chọn rồi chạm vào thanh công cụ nổi phía trên.

Các trích dẫn được lưu vào cấu trúc `.crosspoint/clippings` và đồng thời xuất một bản sao tương thích định dạng Kindle vào tệp văn bản thuần `My Clippings.txt` ngay tại thư mục gốc của thẻ nhớ SD.

---

## 6. Giới hạn hiện tại & Lộ trình phát triển

Firmware đang được tích cực phát triển và hoàn thiện. Một số tính năng đang được tối ưu hóa:
* **Ảnh bìa lớn:** Các ảnh bìa có độ phân giải quá cao nhúng trong EPUB (ví dụ ảnh cao hơn 2000px) có thể mất vài giây để giải mã trong lần đầu tiên tạo ảnh thu nhỏ.
* **Định dạng ảnh:** Hầu hết ảnh JPG, PNG và GIF không xen kẽ (non-interlaced) đều hiển thị tốt. Ảnh động GIF chỉ hiển thị khung hình đầu tiên.

---

## 7. Xử lý sự cố & Thoát khỏi vòng lặp khởi động

Nếu gặp lỗi hoặc máy bị khởi động lại liên tục (bootloop):

**Báo cáo lỗi (Crash Report):**
Khi xảy ra sự cố, CrossPoint sẽ tự động ghi tệp nhật ký `crash_report.txt` vào thư mục gốc của thẻ nhớ SD. Bạn có thể mở tệp này để kiểm tra nguyên nhân hoặc đính kèm khi báo cáo lỗi cho nhà phát triển.

**Theo dõi nhật ký qua cổng Serial:**
Kết nối thiết bị với máy tính và chạy công cụ giám sát:
```powershell
python scripts/debugging_monitor.py
```
Công cụ này sẽ vẽ đồ thị bộ nhớ RAM trực tiếp, hiển thị màu sắc theo từng nhóm thông báo và hỗ trợ lệnh tương tác.

**Thoát khỏi vòng lặp khởi động (Bootloop):**
Nếu máy bị kẹt khởi động liên tục:
1. Nhấn rồi nhả nút **Reset** ở cạnh bên.
2. Ngay lập tức nhấn và giữ đồng thời phím **Back** và phím **Power** cho đến khi máy khởi động thẳng vào màn hình chính Home.
3. Nếu vấn đề do bộ nhớ đệm hoặc tệp cấu hình bị lỗi, hãy cắm thẻ nhớ vào máy tính và xóa thư mục `.crosspoint/` (hoặc chỉ xóa các tệp `settings.json`, `state.json` và các thư mục `epub_*` bên trong đó).
