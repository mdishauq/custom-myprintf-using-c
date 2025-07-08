Nice! Here's a clean and professional `README.md` content for your project:

---

## 📦 Custom `my_printf()` in C

This project is a lightweight custom implementation of a minimal version of the standard `printf()` function in C. It supports formatted printing of strings and integers using `%s` and `%d`.

### ✨ Features

* ✅ Custom `my_print()` function with support for:

  * `%d` → integers
  * `%s` → strings
* ✅ Internal implementations:

  * `print_int()` — prints integers manually (no `printf`)
  * `print_str()` — prints strings character-by-character
* 🚫 No use of standard `printf`, just `putchar()` and variadic functions

---

### 🧠 How it works

This uses C's `<stdarg.h>` to handle a variable number of arguments. Internally, your own implementations (`print_int`, `print_str`) are used to print the values to the console, mimicking `printf` behavior.

---

### 🛠️ Sample Usage

```c
int main() {
    my_print("Hi, I am %d years old and my name is %s.\n", 20, "Ishauq");
    return 0;
}
```

**Output:**

```
Hi, I am 20 years old and my name is Ishauq.
```

---

### 📁 Files

* `custom_printf.c` — main source code with `my_print()` and helpers
* `README.md` — this file

---

### 🚀 Future Plans

* [ ] Add support for `%c` (character)
* [ ] Add support for `%f` (float)
* [ ] Add width/align formatting (like `%5d`)
* [ ] Add `my_sprintf()` (print to buffer)

---

### 🧑‍💻 Author

**S. Mohamed Ishauq**
Made with ❤️ while learning C and embedded systems.

---

Let me know if you want this in `.md` file format — I can give you the ready-to-copy file too!
