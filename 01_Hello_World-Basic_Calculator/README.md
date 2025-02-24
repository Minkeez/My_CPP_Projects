# Basic C++ Calculator

This is a simple C++ program that performs basic arithmetic operations: addition, subtraction, multiplication, and division. The program ensures that division by zero is handled properly.

## Features
- Prints "Hello, World!" to the console.
- Prompts the user to enter two numbers.
- Computes and displays:
  - Sum
  - Difference
  - Product
  - Quotient (with division-by-zero handling)

## Prerequisites
To run this program, you need a C++ compiler. Here are the installation steps for different operating systems:

### Windows (MinGW-w64)
1. Download MinGW - Minimalist GNU for Windows from [SourceForge](https://sourceforge.net/projects/mingw/).
2. Install it
3. Verify installation with:
   ```
   g++ --version
   ```

### Mac (Xcode Command Line Tools)
1. Open Terminal and run:
   ```
   xcode-select --install
   ```
2. Verify installation with:
   ```
   g++ --version
   ```

### Linux (Ubuntu/Debian)
1. Open Terminal and install g++:
   ```
   sudo apt update
   sudo apt install g++
   ```
2. Verify installation:
   ```
   g++ --version
   ```

## Compilation and Execution
Follow these steps to compile and run the program:

1. Open a terminal and navigate to the project directory:
   ```
   cd path/to/this/project
   ```
2. Compile the program using g++:
   ```
   g++ main.cpp -o main
   ```
3. Run the executable:
   - On Windows:
     ```
     main.exe
     ```
   - On Mac/Linux:
     ```
     ./calculator
     ```

## Example Usage
```
Hello, World!
Enter first number: 10
Enter second number: 5
Results:
Sum: 15
Difference: 5
Product: 50
Quotient: 2
```

If the second number is `0`, the program displays an error message and avoids division by zero:
```
Error: Division by zero is not allowed.
```
