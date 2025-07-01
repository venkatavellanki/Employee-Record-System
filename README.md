# 👨‍💼 Employee Record System in C

This is a simple C mini project developed as part of the **PPS (Problem Solving and Programming in C)** course at SRM Institute of Science and Technology.  
The program allows adding and displaying employee records using file handling.

---

## 💡 Features

- Add Employee Details (ID, Name, Designation, Salary)
- Display All Saved Employee Records
- Data is stored persistently in `employee.txt` using `fwrite()` and `fread()`

---

## 📂 Files in This Repository

| File Name           | Purpose                                        |
|---------------------|------------------------------------------------|
| `employee.c`         | Main source code in C                         |
| `sample-output.txt`  | Sample run output showing menu and response   |
| `README.md`          | This documentation file                       |
| `.gitignore`         | Git ignore rules to exclude runtime files     |

---

## 🛠 How to Run

### 🧱 Prerequisites

- Any C compiler like GCC
- Code::Blocks, Turbo C++, or [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)

### 💻 Steps to Compile & Run (for GCC):

```bash
gcc employee.c -o employee
./employee
