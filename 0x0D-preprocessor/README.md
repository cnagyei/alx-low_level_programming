# 0x0D. C - Preprocessor

## Resources

- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [include guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Learning Objectives

- What are macros and how to use them
- What are the most common predefined macros
- How to include guard your header files

## Tasks

### 0. Object-like Macro

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

```sh
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$
```
