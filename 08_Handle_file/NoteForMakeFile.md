## Basic Knowledge For Static and Shared Library



### English (VietNamese below)

#### Shared Lib

- Shared libraries is `.so` files (`.dll` file in Windows, or in OS X `.dylib`). All code are relating to the library in this file, and it is referenced by program using it at run-time. A program using shared library only make references to the code that it uses in shared library

#### Static Lib

- Static lib are `.a` files (`.lib` files in Windows). All the code are relating to the library in this file, and it is directly linked to the code at compile time. A program using static library takes copies of the code that uses from the library and makes it part of a program. [Windows also has .lib files which are used to reference .dll files, but they act the same way as the first one].

There are advantages and disadvantages in each method:

- 

### VietNamese

#### Shared Lib

- Shared Libraries là file `.so` (`.dll` ở Windows). Tất cả code có liên quan đến thư viện đều ở trong file này, và nó được tham chiếu bởi chương trình sử dụng chúng trong thời gian chạy. Chương trình sử dụng shared library chỉ tham chiếu tới code mà nó sử dụng shared lib

#### Static Lib
- Static lib là file `.a` (`.lib` ở Windows). Tât cả code có liên quan đến thư viện ở trong file này, và nó link trực tiếp tới code trong thời gian thực thi. Chương trình sử dụng static lib copy toàn bộ code sử dụng từ thư viện và làm cho nó trở thành một phần của chương trình.

    [Windows cũng có file `.lib` mà nó sử dụng để tham chiếu .dll files, nhưng chung đóng vai trò như nhau trong thời gian đầu ]

