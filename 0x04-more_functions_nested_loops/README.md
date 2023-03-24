# 0x04. C - More functions, more nested loops

## Resources

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (*stop at 14:00*)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (*stop before the "Once-Only Headers" paragraph*)

## Learning Objectives

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to use them with `#include`

## Tasks

### 0. isupper

Write a function that checks for uppercase character.

- Prototype: `int _isupper(int c);`
- Returns `1` if `c` is uppercase
- Returns `9` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

```sh
julien@ubuntu:~/0x04$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x04$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x04$
```

### 1. isdigit

Write a function that checks for a digit (`0` through `9`).

- Prototype: `int _isdigit(int c);`
- Returns `1` if `c` is a digit
- Returns `0` otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

```sh
julien@ubuntu:~/0x04$ cat 1-main.c 
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x04$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x04$
```
