# Ứng dụng Máy Tính Cơ Bản

## Mô tả
Ứng dụng Máy Tính Cơ Bản là một ứng dụng console cho phép người dùng thực hiện các phép tính cộng, trừ, nhân và chia trên hai số nguyên hoặc số thập phân. Ứng dụng này được xây dựng bằng [ngôn ngữ lập trình của bạn] và cung cấp một giao diện đơn giản để thực hiện các phép tính cơ bản.

## Yêu Cầu Chức Năng
1. **Giao diện người dùng:** Ứng dụng cung cấp một giao diện console đơn giản để người dùng nhập hai số và lựa chọn phép tính.
2. **Phép tính cơ bản:** Ứng dụng thực hiện phép cộng, trừ, nhân hoặc chia dựa trên lựa chọn của người dùng.
3. **Hiển thị kết quả:** Kết quả của phép tính được hiển thị trên màn hình.

## Yêu Cầu Phi Chức Năng
Ứng dụng cũng phải xử lý các trường hợp ngoại lệ sau đây để đảm bảo tính ổn định và bảo mật:
1. **Phép chia cho số 0:** Nếu người dùng chọn phép chia và nhập số chia là 0, ứng dụng phải thông báo lỗi và yêu cầu người dùng nhập lại số chia.
2. **Giới hạn giá trị đầu vào:** Ứng dụng phải kiểm tra xem hai số đầu vào (a và b) có nằm trong khoảng -10^4 đến 10^4 hay không. Nếu không, ứng dụng phải yêu cầu người dùng nhập lại các số này.
3. **Kiểm tra phép tính:** Ứng dụng phải kiểm tra xem người dùng đã chọn một trong bốn phép tính (cộng, trừ, nhân, chia) hay không. Nếu không, yêu cầu người dùng nhập lại phép tính.

## Phân tích bài toán
Bài toán yêu cầu xây dựng một ứng dụng máy tính cơ bản cho phép người dùng thực hiện các phép tính cộng, trừ, nhân và chia trên hai số nguyên hoặc số thập phân. Ứng dụng cũng phải xử lý các trường hợp ngoại lệ như phép chia cho số 0, giới hạn giá trị đầu vào, và kiểm tra tính hợp lệ của phép tính.

## Hướng Dẫn Sử Dụng
1. Khởi động ứng dụng.
2. Nhập số thứ nhất (a).
3. Nhập số thứ hai (b).
4. Chọn phép tính (cộng, trừ, nhân, chia).
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
**Test case 1 (Phép cộng - a, b thuộc [-10^4, 10^4])**
 - Input:
   - a = 5000
   - b = 3000
   - Phép tính: Cộng (+)
 - Hành động: Thực hiện phép cộng a + b
 - Expected Output: 8000
 - Actual Output: 

**Test case 2 (Phép trừ - a, b thuộc [-10^4, 10^4])**
 - Input:
   - a = 9000
   - b = 3000
   - Phép tính: Trừ (-)
 - Hành động: Thực hiện phép trừ a - b
 - Expected Output: 6000
 - Actual Output:

**Test case 3 (Phép nhân - a, b thuộc [-10^4, 10^4])**
 - Input:
   - a = 5000
   - b = 3000
   - Phép tính: Nhân (*)
 - Hành động: Thực hiện phép nhân a * b
 - Expected Output: 15000000
 - Actual Output:

**Test case 4 (Phép chia - a, b thuộc [-10^4, 10^4] - b khác 0)**
 - Input:
   - a = 150000
   - b = 3000
   - Phép tính: Chia (/)
 - Hành động: Thực hiện phép chia a / b
 - Expected Output: 50
 - Actual Output:

**Test case 5 (Phép chia - a, b thuộc [-10^4, 10^4] - b = 0)**
 - Input:
   - a = 150000
   - b = 0
   - Phép tính: Chia (/)
 - Hành động: Yêu cầu nhập lại só b cho đến khi b khác 0
 - Expected Output: You must enter a number other than 0:
 - Actual Output:

**Test case 6 (Phép lũy thừa - a, b thuộc [-10^4, 10^4])**
 - Input:
   - a = 6000
   - b = 4
   - Phép tính: Mũ (^)
 - Hành động: Yêu cầu nhập lại phép tính đến khi nhập đúng định dạng
 - Expected Output: You must enter a character representing one of the four operations: +, -, *, /:
 - Actual Output:

**Test case 7 (a không thuộc [-10^4, 10^4])**
 - Input:
   - a = 10^5
 - Hành động: Yêu cầu nhập lại só a cho đến khi a thuộc [-10^4, 10^4]
 - Expected Output: Invalid input. Please enter a valid number:
 - Actual Output:

**Test case 8 (b không thuộc [-10^4, 10^4])**
 - Input:
   - a = 14000
   - b = -10^5
 - Hành động: Yêu cầu nhập lại só b cho đến khi b thuộc [-10^4, 10^4]
 - Expected Output: Invalid input. Please enter a valid number:
 - Actual Output:

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

**Test case 1 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập hợp 1)**
 - Input:
    - a = 2000
    - b = 4000
    - Phép tính: Cộng(+)
 - Hành động: Thực hiện phép tính a + b
 - Expected Output: 6000
 - Actual Output:

**Test case 2 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập hợp 2)**
 - Input:
    - a = 7000
    - b = 4000
    - Phép tính: Trừ(-)
 - Hành động: Thực hiện phép tính a - b
 - Expected Output: 3000
 - Actual Output:

**Test case 3 (a thuộc tập hợp 1, b thuộc tập hợp 1, phép tính thuộc tập hợp 3)**
 - Input:
    - a = 2000
    - b = 4000
    - Phép tính: Nhân(*)
 - Hành động: Thực hiện phép tính a * b
 - Expected Output: 8000000
 - Actual Output:

**Test case 4 (a thuộc tập hợp 1, b thuộc tập hợp 5, phép tính thuộc tập hợp 4)**
 - Input:
    - a = 800000
    - b = 4000
    - Phép tính: Chia(/)
 - Hành động: Thực hiện phép tính a / b
 - Expected Output: 200
 - Actual Output:

**Test case 5 (a thuộc tập hợp 1, b thuộc tập hợp 4, phép tính thuộc tập hợp 4)**
 - Input:
    - a = 2000
    - b = 0
    - Phép tính: Chia(/)
 - Hành động: Yêu cầu nhập lại số b cho đến khi số b khác 0
 - Expected Output: You must enter a number other than 0:
 - Actual Output:

**Test case 6 (a thuộc tập hợp 2, b thuộc tập hợp 1, phép tính thuộc tập hợp 1)**
 - Input:
    - a = -10^5
    - b = 2000
    - Phép tính: Cộng(+)
 - Hành động: Yêu cầu nhập lại số a cho đến khi số a thuộc [-10^4, 10^4]
 - Expected Output: Invalid input. Please enter a valid number:
 - Actual Output:

## Tác Giả
- Nguyễn Hải Phong
---
