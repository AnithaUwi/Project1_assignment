 Question 1: C Program Lifecycle and Compilation

## Program Description
A simple C program that calculates the area of a circle given its radius.

## How to Compile
```bash
gcc Q1_circle_area.c -o circle_area

How to Run
bash
./circle_area

 Question 2: Control Flow & Repetition - Menu-Driven Calculator

## Program Description
A menu-driven calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division) with input validation and error handling.

## Features
- Uses `while` loop for repeated execution
- Uses `switch` statement for menu options
- Uses `break` to exit the program
- Uses `continue` to skip invalid operations (division by zero, invalid choices)
- Validates user input

## How to Compile
```bash
gcc Q2_calculator.c -o calculator

How to Run
bash
./calculator

# Question 3: Functions & Recursion

## Program Description
A modular math operations program demonstrating recursive and iterative functions with proper function design and reusability.

## Functions Included
1. **displayMenu()** - Displays menu options (void function)
2. **factorial(int n)** - RECURSIVE - Calculates factorial using recursion
3. **power(int base, int exp)** - RECURSIVE - Calculates power using recursion
4. **isPrime(int num)** - Iterative - Checks if number is prime (demonstrates reusability)

## Recursion Examples
- **Factorial:** 5! = 5 × 4! = 5 × 4 × 3! ... base case: 0! = 1
- **Power:** 2^10 = 2 × 2^9 = 2 × 2 × 2^8 ... base case: 2^0 = 1

## How to Compile
```bash
gcc math_operations.c -o math_operations
