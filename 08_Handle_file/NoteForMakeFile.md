## Basic Knowledge For Static and Shared Library


### English (VietNamese below)

#### Shared Lib

Shared libraries is `.so` files (`.dll` file in Windows, or in OS X `.dylib`). All code are relating to the library in this file, and it is referenced by program using it at run-time. A program using shared library only make references to the code that it uses in shared library

#### Static Lib

Static lib are `.a` files (`.lib` files in Windows). All the code are relating to the library in this file, and it is directly linked to the code at compile time. A program using static library takes copies of the code that uses from the library and makes it part of a program. [Windows also has .lib files which are used to reference .dll files, but they act the same way as the first one].

There are advantages and disadvantages in each method:

- Shared libraries reduce the amount of code that is duplicated in each program that makes use of the library, **keeping library small**. It also allows you to replace the shared object with one that is functionally equivalent, but may have added performance benefits without needing to recompile the program that makes use of it. Shared libraries will, however have a small additional cost for the execution of the functions as well as a run-time loading cost as all the symbols in the library need to be connected to the things they use. Additionally, shared libraries can be loaded into an application at run-time, which is the general mechanism for implementing binary plug-in systems.

- Static libraries increase the overall size of the binary, but it means that you don't need to carry along a copy of the library that is being used. As the code is connected at compile time there are not any additional run-time loading costs. The code is simply there.

Personally, I prefer shared libraries, but use static libraries when needing to ensure that the binary does not have many external dependencies that may be difficult to meet

    [In this Example, I'll use shared lib to descripts all of process handle file and I will descripts how to use function pointer]

### VietNamese

#### Shared Lib

Shared Libraries là file `.so` (`.dll` ở Windows). Tất cả code có liên quan đến thư viện đều ở trong file này, và nó được tham chiếu bởi chương trình sử dụng chúng trong thời gian chạy. Chương trình sử dụng shared library chỉ tham chiếu tới code mà nó sử dụng shared lib

#### Static Lib
Static lib là file `.a` (`.lib` ở Windows). Tât cả code có liên quan đến thư viện ở trong file này, và nó link trực tiếp tới code trong thời gian thực thi. Chương trình sử dụng static lib copy toàn bộ code sử dụng từ thư viện và làm cho nó trở thành một phần của chương trình.

    [Windows cũng có file `.lib` mà nó sử dụng để tham chiếu `.dll` files, nhưng chung đóng vai trò như nhau trong thời gian đầu ]

Đây là một ưu điểm và nhược điểm của mỗi phương pháp:
- Shared lib giảm số lương code mà mỗi chương trình đã sao chép để sử dụng thư viện, ** giữa cho thư viện có kích thước nhỏ **. Nó cũng cho phép bạn thay thế đối tượng được chia sẻ với một chức năng tương đương, nhưng có thể có thêm một số lợi ích về hiệu năng mà không cần thực thi lại chương trình mà nó sử dụng chúng. Tuy nhiên, các thư viện dùng chung sẽ có một khoản chi phí bổ sung nhỏ cho việc thực thi các chức năng cũng như chi phí tải trong thời gian chạy vì tất cả các ký hiệu trong thư viện cần được kết nối với những thứ chúng sử dụng. Ngoài ra, các thư viện dùng chung có thể được tải vào ứng dụng trong thời gian chạy, đây là cơ chế chung để triển khai các hệ thống trình cắm nhị phân.

- Thư viện tĩnh làm tăng kích thước tổng thể của tệp nhị phân, nhưng điều đó có nghĩa là bạn không cần phải mang theo bản sao của thư viện đang được sử dụng. Vì mã được kết nối tại thời điểm biên dịch nên không có bất kỳ chi phí tải bổ sung nào trong thời gian chạy. Mã chỉ đơn giản là ở đó.

Cá nhân tôi thích các thư viện dùng chung hơn, nhưng sử dụng các thư viện tĩnh khi cần đảm bảo rằng tệp nhị phân không có nhiều phụ thuộc bên ngoài có thể khó đáp ứng