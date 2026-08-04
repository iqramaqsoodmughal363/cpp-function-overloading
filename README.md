# 🔄 Function Overloading in C++

> A C++ program demonstrating **Function Overloading** (compile-time polymorphism), where multiple functions share the same name but differ in their parameter types or count.

---

## 📋 Overview

This program illustrates **Function Overloading**, a form of compile-time polymorphism in C++. It allows multiple functions with the same name but different parameter lists (type or number of parameters).

**Key Concepts:**
- **Function Overloading:** Multiple functions with the same name.
- **Compile-time Polymorphism:** The compiler determines which function to call based on the arguments provided.
- **Type Safety:** Different parameter types allow the same logical operation to work with different data types.

---

## ✨ Features

- ✅ Demonstrates function overloading with different parameter types
- ✅ `add()` function works with both integer and double inputs
- ✅ Shows compile-time polymorphism
- ✅ Clean and beginner-friendly implementation
- ✅ Uses `std::cout` for formatted output

---

## 🧮 Program Logic & Execution Flow

1. The `Math` class is defined with two overloaded `add()` functions:
   - `int add(int a, int b)` → Takes two integers and returns their sum.
   - `double add(double a, double b)` → Takes two doubles and returns their sum.
2. In `main()`:
   - A `Math` object `m` is created.
   - `m.add(5, 3)` calls the integer version → Output: `Sum (int): 8`.
   - `m.add(5.5, 3.2)` calls the double version → Output: `Sum (double): 8.7`.

---

## 💻 Sample Output
Sum (int): 8
Sum (double): 8.7


---

## 🛠️ How to Compile and Run (Windows & Linux)

Follow the instructions below based on your operating system.

### 🪟 For Windows Users (Using MinGW/G++ or any C++ compiler)
| Step | Command |
| :---: | :--- |
| **1. Compile** | `g++ function_overloading.cpp -o function_overloading.exe` |
| **2. Run** | `function_overloading.exe` |

> **Note:** If `g++` is not recognized, make sure MinGW is installed and added to your System PATH.

---

### 🐧 For Linux / macOS Users (Terminal)
| Step | Command |
| :---: | :--- |
| **1. Compile** | `g++ function_overloading.cpp -o function_overloading` |
| **2. Run** | `./function_overloading` |

> **Prerequisite:** Ensure GCC/G++ is installed on your system. (On Linux: `sudo apt install g++` | On macOS: `xcode-select --install`)

---

## 📂 Project Structure
cpp-function-overloading/
│
├── function_overloading.cpp # Main source code file
└── README.md # Project documentation (this file)


---

## 👩‍💻 Author

**Iqra Maqsood Mughal**  
*C++ Developer | Programming Enthusiast*

---

## 📅 Date

**August 2, 2026**

---

## 📄 License

This project is open-source and intended for educational purposes.
