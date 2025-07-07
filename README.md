# 👨‍💼 Employee Record System in C

This is a simple **C mini project** developed as part of the **PPS (Problem Solving and Programming in C)** course at **SRM Institute of Science and Technology**.

The program allows users to **add** and **display** employee records using **file handling** operations in C.

---

## 💡 Features

- Add Employee Details (ID, Name, Designation, Salary)  
- Display All Saved Employee Records  
- Data is stored persistently in `employee.txt` using `fwrite()` and `fread()`

---

## 📂 Files in This Repository

| File Name           | Purpose                                 |
|---------------------|-----------------------------------------|
| `employee.c`         | Main source code in C                   |
| `sample-output.txt`  | Sample run output showing menu options  |
| `README.md`          | This documentation file                 |
| `.gitignore`         | Git ignore rules to exclude runtime files |

---

## 🛠 How to Run

### 🧱 Prerequisites

- Any **C compiler** (like GCC)
- IDEs like **Code::Blocks**, **Turbo C++**, or [**OnlineGDB**](https://www.onlinegdb.com/online_c_compiler)

### 💻 Steps to Compile & Run (using GCC)

```bash
gcc employee.c -o employee
./employee
```

✅ After compilation, an executable file `employee` is generated.  
✅ A file named `employee.txt` will be created automatically to store employee data.

---

## 📌 Sample Output

```text
=== Employee Record System ===
1. Add Employee
2. Display All Employees
3. Exit

Enter your choice:
```

---

## 📄 Disclaimer

This project was developed during **Semester 2** as part of the **PPS** course at **SRM Institute of Science and Technology**.  
It demonstrates basic file handling concepts and a menu-driven structure using the C programming language.

This code is intended **strictly for academic and educational purposes only**.  
It is **not secure**, **not scalable**, and should **not be used in production environments**.

© 2022 **Venkat Aditya Vellanki**. All rights reserved.
