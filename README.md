# Simple C `cat` Utility

A minimal C implementation of the classic Unix `cat` (concatenate) utility that prints the contents of a file to standard output.

---

## Features

* **File Display:** Reads and prints characters sequentially until End-of-File (`EOF`).
* **Header Output:** Displays the target file name as a header before outputting the content.
* **Error Handling:** Validates argument counts and checks whether the file can be opened.

---

## Getting Started

### Prerequisites

* A C compiler (`gcc`, `clang`, etc.)
* Standard C library (`libc`)

### Compilation

Compile the source file using `gcc`:

```bash
gcc -Wall -Wextra -O2 cat.c -o mycat
```

---

## Usage

Run the executable by passing the path of the file you want to read:

```bash
./mycat <filename>
```

### Example

Assuming a file named `hello.txt` with the text `Hello, World!`:

```bash
$ ./mycat hello.txt

hello.txt:

Hello, World!
```

---

## Error Handling

* **Missing or extra arguments:**
  ```text
  Usage: ./mycat <filename>
  ```
* **Non-existent or unreadable file:**
  ```text
  Could not open the file: 'missing.txt'
  ```

---

## License

This project is open-source and available under the [MIT License](LICENSE).
