Giới thiệu

Dự án này là một xe robot điều khiển từ xa bằng Bluetooth, trong đó:

Arduino Uno R3 (hoặc ESP32) đóng vai trò điều khiển.

HC-05 Bluetooth module để kết nối với điện thoại.

Ứng dụng Android được lập trình bằng MIT App Inventor để gửi lệnh (tiến, lùi, rẽ trái, rẽ phải, dừng) đến xe.

Mục tiêu:

Hiểu cơ chế giao tiếp Bluetooth giữa Arduino và điện thoại.

Ứng dụng MIT App Inventor để lập trình app điều khiển.

Thực hành điều khiển động cơ DC qua module driver.

Phần cứng sử dụng

Arduino Uno R3

Module Bluetooth HC-06

Driver motor L298N

2 động cơ DC + bánh xe

Pin Li-ion hoặc 18650 + mạch sạc bảo vệ

Khung xe robot

Phần mềm

Arduino IDE để lập trình vi điều khiển.

MIT App Inventor để thiết kế ứng dụng điều khiển.

Sơ đồ kết nối

HC-05 TX → Arduino RX ( chân 0)

HC-05 RX → Arduino TX ( chân 1)

Driver L298N → Động cơ trái/phải

Nguồn pin → Arduino + L298N
