# Simple-Encryption-Program
A small C program that encrypts a text with a given key.

## Overview
This project is a small C program performing basic text encryption usin exclusive OR operation. The program takes a user-provided key and plaintext input, encrypts the text, and writes the encrypted output to a file.

> Note: This is a **demonstration project** for learning purposes. XOR encryption is **not secure** for real-world cryptographic use.

## Features
Encrypts text using XOR with a given single character key
Supports user input for both key and plaintext
Writes encrypted data to a file

## How It Works
The encryption algorithm applies the XOR operation between each character of the plaintext and the key:

```
encrypted_char = plaintext_char ^ key_char
```

## Compilation & Usage

### Compile

```bash
gcc program.c functions.c -o program
```

### Run

```bash
.\program
```

### Example Workflow

1. Enter encryption key
2. Enter plaintext
3. Program outputs encrypted text
4. Encrypted data is saved to a file (e.g., `encrypted.enc`)

## Author

Serguney Gumus