# Ứng dụng Máy Tính Cơ Bản

## Mô tả
Ứng dụng Máy Tính Cơ Bản là một ứng dụng console cho phép người dùng thực hiện các phép tính cộng, trừ, nhân và chia trên hai số nguyên. Ứng dụng này được xây dựng bằng [ngôn ngữ lập C++] và cung cấp một giao diện đơn giản để thực hiện các phép tính cơ bản.

## Yêu Cầu Chức Năng
1. **Giao diện người dùng:** Ứng dụng cung cấp một giao diện console đơn giản:
  - Trước khi nhập số a in ra màn hình: "Enter the first integer or decimal number: ".
  - Trước khi nhập số b in ra màn hình: "Enter the second integer or decimal number: ".
  - Trước khi nhập phép tính in ra màn hình: "Enter the operation you want to perform (+, -, *, /): ".
2. **Phép tính cơ bản:** Ứng dụng thực hiện phép cộng, trừ, nhân hoặc chia dựa trên lựa chọn của người dùng.
3. **Hiển thị kết quả:** Kết quả của phép tính được hiển thị trên màn hình dưới dạng: "Result: kết quả của phép toán".

## Yêu Cầu Phi Chức Năng
Ứng dụng cũng phải xử lý các trường hợp ngoại lệ sau đây để đảm bảo tính ổn định:
1. **Phép chia cho số 0:** Nếu người dùng chọn phép chia và nhập số bị chia là 0, ứng dụng đưa thông báo "You cannot divide by the number 0." và kết thúc chương trình.
2. **Giới hạn giá trị đầu vào:** Ứng dụng phải kiểm tra xem hai số đầu vào (a và b) có nằm trong khoảng -10^4 đến 10^4 hay không. Nếu không, ứng dụng đưa ra thông báo: "The number you input must fall within the range of [-10^4; 10^4]." và kết thúc chương trình.
3. **Kiểm tra phép tính:** Ứng dụng phải kiểm tra xem người dùng đã chọn một trong bốn phép tính (cộng, trừ, nhân, chia) hay không. Nếu không, ứng dụng đưa ra thông báo: "The program can only perform four arithmetic operations: addition (+), subtraction (-), multiplication (*), and division (/)." và kết thúc chương trình.

## Phân tích bài toán
Bài toán yêu cầu xây dựng một ứng dụng máy tính cơ bản cho phép người dùng thực hiện các phép tính cộng, trừ, nhân và chia trên hai số nguyên. Ứng dụng cũng phải xử lý các trường hợp ngoại lệ như phép chia cho số 0, giới hạn giá trị đầu vào, và kiểm tra tính hợp lệ của phép tính.

## Hướng Dẫn Sử Dụng
1. Khởi động ứng dụng.
2. Nhập số thứ nhất (a).
3. Nhập số thứ hai (b).
4. Nhập phép tính (cộng(+), trừ(-), nhân(*), chia(/)).
5. Kết quả sẽ được hiển thị trên màn hình.

## Yêu Cầu Kỹ Thuật
- Ngôn ngữ lập trình: C++.
- Xử lý các trường hợp ngoại lệ một cách an toàn và thông báo lỗi cho người dùng.

## Tạo các ca kiểm thử bằng bảng quyết định

### Các điều kiện
1. a, b có thuộc khoản [-10^4, 10^4] không
2. Các phép tính nhập vào có phải một trong bốn phép tính (công, trừ, nhân, chia)
3. Kiểm tra b khác 0(trường hợp là phép chia)

### Bảng quyết định
|          |                            | R1 | R2 | R3 | R4 | R5 | R6 |
|----------|----------------------------|----|----|----|----|----|----|
|Điều kiện | a thuộc [-10^4,10^4]       | T  | T  | T  | T  | F  | T  |
|          | b thuộc [-10^4,10^4]       | T  | T  | T  | T  | -  | F  |
|          | phép cộng, trừ, nhân       | T  | F  | F  | F  | -  | -  |
|          | phép chia                  | F  | T  | T  | F  | -  | -  |
|          | b khác 0                   | -  | T  | F  | -  | -  | -  |
|Hành động | trả về kết quả phép tính   | x  | x  |    |    |    |    |
|          | yêu cầu nhập lại số a      |    |    |    |    | x  |    |
|          | yêu cầu nhập lại số b      |    |    | x  |    |    | x  |
|          | yêu cầu nhập lại phép tính |    |    |    | x  |    |    |

### Các test case tạo từ bảng quyết định trên
**Ca kiểm thử 01 (Phép cộng - a, b thuộc [-10^4, 10^4])**
 - Test case: test01.txt
 - Kết quả: Accepted;
 
**Ca kiểm thử 02 (Phép trừ - a, b thuộc [-10^4, 10^4])**
 - Test case: test02.txt
 - Kết quả: Accepted;

**Ca kiểm thử 03 (Phép nhân - a, b thuộc [-10^4, 10^4])**
 - Test case: test03.txt
 - Kết quả: Accepted;

**Ca kiểm thử 04 (Phép chia - a, b thuộc [-10^4, 10^4] - b khác 0)**
 - Test case: test04.txt
 - Kết quả: Accepted;

**Ca kiểm thử 05 (Phép chia - a, b thuộc [-10^4, 10^4] - b = 0)**
 - Test case: test05.txt
 - Kết quả: Accepted;
   
**Ca kiểm thử 06 (Phép lũy thừa - a, b thuộc [-10^4, 10^4])**
 - Test case: test06.txt
 - Kết quả: Accepted;
   
**Ca kiểm thử 07 (a không thuộc [-10^4, 10^4])**
 - Test case: test07.txt
 - Kết quả: Accepted;
   
**Ca kiểm thử 08 (b không thuộc [-10^4, 10^4])**
 - Test case: test08.txt
 - Kết quả: Accepted;
   
## Tạo các ca kiểm thử bằng phân hoạch tương đương

### Các tập hợp

**Tập hợp tương đương của a:**
  - Tập hợp 1: a thuộc [-10^4, 10^4]
  - Tập hợp 2: a < -10^4
  - Tập hợp 3: a > 10^4

**Tập hợp tương đương của b:**
  - Tập hợp 1: b thuộc [-10^4, 10^4]
  - Tập hợp 2: b < -10^4
  - Tập hợp 3: b > 10^4
  - Tập hợp 4: b = 0
  - Tập hợp 5: b thuộc [-10^4, 10^4] \ {0}

**Tập hợp tương đương của phép tính:**
  - Tập hợp 1: Phép cộng(+)
  - Tập hợp 2: Phép trừ(-)
  - Tập hợp 3: Phép nhân(*)
  - Tập hợp 4: Phép chia(/)
  - Tập hợp 5: Các phép tính khác(^, &, |, xor... )

### Các test case tạo từ phân hoạch tương đương

**Ca kiểm thử 01 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập hợp 1)**
 - Test case: test01.txt
 - Kết quả: Accepted;

**Ca kiểm thử 02 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập hợp 2)**
 - Test case: test02.txt
 - Kết quả: Accepted;

**Ca kiểm thử 03 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập hợp 3)**
 - Test case: test03.txt
 - Kết quả: Accepted;

**Ca kiểm thử 04 (a thuộc tập hợp 1, b thuộc tập hợp 5, phép tính thuộc tập hợp 4)**
 - Test case: test04.txt
 - Kết quả: Accepted;

**Ca kiểm thử 05 (a thuộc tập hợp 1, b thuộc tập hợp 4, phép tính thuộc tập hợp 4)**
 - Test case: test05.txt
 - Kết quả: Accepted;

**Ca kiểm thử 06 (a thuộc tập hợp 2)**
 - Test case: test06.txt
 - Kết quả: Accepted;

**Ca kiểm thử 07 (a thuộc tập hợp 3)**
 - Test case: test07.txt
 - Kết quả: Accepted;
   
**Ca kiểm thử 08 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập 5)**
 - Test case: test08.txt
 - Kết quả: Accepted;

**Ca kiểm thử 09 (a thuộc tập hợp 1, b thuộc tập hợp 2)**
 - Test case: test09.txt
 - Kết quả: Accepted;

**Ca kiểm thử 10 (a thuộc tập hợp 1, b thuộc tập hợp 3)**
 - Test case: test10.txt
 - Kết quả: Accepted;
## Tác Giả
- Nguyễn Hải Phong
- MSV: 21020085
---
