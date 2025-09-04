Caesar Cipher – C Implementation

A lightweight **C program** that performs **Caesar Cipher** encryption using arrays.  
This classical substitution cipher shifts each uppercase letter in the input text by a fixed amount within the alphabet.

---

 Features
- Encrypts uppercase strings (`A–Z`) with a user-defined shift (0–25).
- Wraps around the alphabet (e.g., shifting `Z` by 2 becomes `B`).
- Simple array-based implementation (no external libraries).

---

 Getting Started

 Prerequisites
- Any C compiler (GCC, Clang, MSVC, etc.)

 Build & Run
```bash
# Compile
gcc caesar_cipher.c -o caesar_cipher

# Run
./caesar_cipher
