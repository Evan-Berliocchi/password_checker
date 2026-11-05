# Password Strength Checker

A simple C++ program that evaluates password strength using several criteria and assigns a score to classify the password as weak, medium, strong, or robust.

## Features

- Checks that the password is not empty.
- Gives bonus points for passwords containing at least 12 characters.
- Checks for lowercase letters, uppercase letters, digits, and punctuation characters.
- Deducts points if two consecutive characters are identical.
- Calculates a score and displays a strength assessment.

## Scoring System

The program evaluates the password using the following rules:

| Criterion | Score |
|---|---:|
| At least 12 characters | +3 |
| Fewer than 12 characters | -4 |
| Contains a lowercase letter | +1 |
| Contains an uppercase letter | +1 |
| Contains a digit | +1 |
| Contains punctuation | +1 |
| Contains two identical consecutive characters | -2 |

The final score cannot be lower than 0.

### Password Strength Levels

| Score | Assessment |
|---|---|
| 0–2 | Weak |
| 3–4 | Medium |
| 5–6 | Strong |
| 7 | Robust |

## Requirements

- A C++ compiler supporting C++11 or later.
- A terminal or command prompt.

## Installation and Execution

1. Clone the repository:

   ```bash
   git clone https://github.com/EvanB38/PasswordChecker.git
   ```

2. Navigate to the project directory:

   ```bash
   cd password_checker
   ```

3. Compile the program:

   ```bash
   g++ main.cpp -o password_checker
   ```

4. Run the program:

   **Windows:**

   ```bash
   .\password_checker.exe
   ```

   **Linux / macOS:**

   ```bash
   ./password_checker
   ```

## Technologies Used

- C++
- Standard C++ Library
- `<iostream>`, `<string>`, and `<cctype>`

## Limitations

Although the program evaluates password strength based on several criteria, it does not take password predictability into account.

For example, a password such as `Azerty123456!` receives the maximum score (7/7) and is classified as "Robust". However, this password follows a predictable pattern and could be easier to guess than the score suggests.

The program does not:
- Detect common passwords or dictionary words.
- Identify predictable keyboard sequences (e.g. AZERTY, QWERTY).
- Evaluate password entropy.
- Check whether a password has been exposed in a data breach.

This project is an educational exercise and should not be considered a reliable security assessment tool.

## Author

Created by [EvanB38](https://github.com/Evan-Berliocchi/password_checker.git).
