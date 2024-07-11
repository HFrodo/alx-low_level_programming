# 0x08. C - Recursion

## Description

This project focuses on implementing various functions using recursion in C. Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc., is forbidden
- You are allowed to use `_putchar`
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Functions

### `_puts_recursion`

- **Description:** Prints a string, followed by a new line.
- **Prototype:** `void _puts_recursion(char *s);`

### `_print_rev_recursion`

- **Description:** Prints a string in reverse.
- **Prototype:** `void _print_rev_recursion(char *s);`

### `_strlen_recursion`

- **Description:** Returns the length of a string.
- **Prototype:** `int _strlen_recursion(char *s);`

### `factorial`

- **Description:** Returns the factorial of a given number.
- **Prototype:** `int factorial(int n);`

### `_pow_recursion`

- **Description:** Returns the value of `x` raised to the power of `y`.
- **Prototype:** `int _pow_recursion(int x, int y);`

### `_sqrt_recursion`

- **Description:** Returns the natural square root of a number.
- **Prototype:** `int _sqrt_recursion(int n);`

### `is_prime_number`

- **Description:** Checks if an input integer is a prime number.
- **Prototype:** `int is_prime_number(int n);`

