# Android JNI Hardware Test Demo

This project demonstrates a simple Android JNI integration where Java calls native C functions to simulate hardware-level operations. It’s ideal for board-level developers and embedded Android testers.

## 🔧 Features
- Java ↔ C communication via JNI
- Simulated hardware control (e.g. toggle a GPIO pin)
- Easy-to-read and testable structure

## 📁 Code Overview
- `NativeBridge.java`: Defines native methods.
- `native-lib.c`: Implements the C logic for simulating hardware control.

## 🔄 Sample Output
Logcat:
```
JNI: Simulating GPIO Toggle - ON
```

## 🧑‍💻 Author
Written by a developer with experience in Android board-level debugging and JNI-based hardware testing.
