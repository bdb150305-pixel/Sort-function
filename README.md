# Sort Function - Chương trình sắp xếp mảng C++

Dự án này triển khai và so sánh hiệu suất của 5 thuật toán sắp xếp phổ biến trong C++.

## Các thuật toán được triển khai

1. **Bubble Sort** - Sắp xếp nổi bọt
2. **Selection Sort** - Sắp xếp chọn
3. **Insertion Sort** - Sắp xếp chèn
4. **Quick Sort** - Sắp xếp nhanh
5. **Merge Sort** - Sắp xếp trộn

## Tính năng

✅ Triển khai 5 thuật toán sắp xếp cơ bản  
✅ Hiển thị từng bước sắp xếp  
✅ Đo thời gian thực hiện chính xác (microseconds)  
✅ Kiểm tra tính đúng đắn của kết quả  
✅ Thống kê thời gian trung bình  
✅ Đọc dữ liệu test từ file  
✅ So sánh hiệu suất giữa các thuật toán  

## Yêu cầu hệ thống

- Compiler hỗ trợ C++11 trở lên (g++, clang++)
- Hệ điều hành: Windows, Linux, MacOS

## Cài đặt và biên dịch

### Linux/MacOS:
```bash
# Clone repository
git clone https://github.com/bdb150305-pixel/Sort-function.git
cd Sort-function

# Biên dịch
g++ -std=c++11 sort.cpp test.cpp -o test

# Chạy chương trình
./test
```

### Windows:
```bash
# Clone repository
git clone https://github.com/bdb150305-pixel/Sort-function.git
cd Sort-function

# Biên dịch
g++ -std=c++11 sort.cpp test.cpp -o test.exe

# Chạy chương trình
test.exe
```

## Cách sử dụng

### 1. Tạo file dữ liệu test

Tạo file `test_sort_array_data.txt` với format:
```
n1
element1 element2 element3 ... elementn1
n2
element1 element2 element3 ... elementn2
```

**Ví dụ:**
```
7
64 34 25 12 22 11 90
5
5 2 8 1 9
```

### 2. Chạy chương trình

```bash
./test
```

### 3. Xem kết quả

Chương trình sẽ hiển thị:
- Mảng ban đầu
- Các bước sắp xếp của từng thuật toán
- Thời gian thực hiện
- Kết quả Pass/Fail
- Bảng thống kê thời gian trung bình

## Ví dụ output

```
========================================
TEST CASE 1 (n = 7)
========================================

--- Test case 1: Bubble Sort ---
Mang ban dau: 64 34 25 12 22 11 90
34 25 12 22 11 64 90
25 12 22 11 34 64 90
...
Ket qua cuoi: 11 12 22 25 34 64 90
Thoi gian thuc hien: 125.500 microseconds
✓ PASS - Mang da duoc sap xep dung!

========================================
  BANG THONG KE THOI GIAN TRUNG BINH
========================================
Thuat toan          Thoi gian TB    So test
----------------------------------------
Bubble Sort              245.50 us         4
Selection Sort           198.25 us         4
Insertion Sort           156.75 us         4
Quick Sort                89.50 us         4
Merge Sort               112.00 us         4
```

## Cấu trúc dự án

```
Sort-function/
├── README.md                      # File hướng dẫn này
├── sort.cpp                       # Triển khai các thuật toán sắp xếp
├── test.cpp                       # File test và benchmark
├── test_sort_array_data.txt       # Dữ liệu test mẫu
└── Makefile                       # Makefile để biên dịch
```

## Độ phức tạp của các thuật toán

| Thuật toán | Best Case | Average Case | Worst Case | Space |
|------------|-----------|--------------|------------|-------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |

## Đóng góp

Mọi đóng góp đều được chào đón! Vui lòng tạo pull request hoặc mở issue để thảo luận về các thay đổi bạn muốn thực hiện.

## Tác giả

- GitHub: [@bdb150305-pixel](https://github.com/bdb150305-pixel)

## License

Dự án này được phát hành dưới giấy phép MIT. Xem file LICENSE để biết thêm chi tiết.

## Liên hệ

Nếu có bất kỳ câu hỏi nào, vui lòng liên hệ qua GitHub Issues.
