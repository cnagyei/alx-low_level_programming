# 0x09. C - Static libraries

## Resources

- [C Static Library](https://www.linkedin.com/pulse/c-static-library-nicolas-ribeiro/)
- [https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)

## Concept Page

### C Static Libraries - Build your own C static library

```sh
ubuntu@ip-172-31-63-244:~/julien$ l
total 44
drwxrwxr-x 2 ubuntu ubuntu 4096 Mar 25 02:47 .
drwxrwxr-x 19 ubuntu ubuntu 4096 Mar 25 02:44 ..
-rw-rw-r-- 1 ubuntu ubuntu 89 Mar 25 02:44 0-print_z.c
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 1-print_alphabet.c
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 2-print_tebahpla.c
-rw-rw-r-- 1 ubuntu ubuntu 166 Mar 25 02:44 3-print_base16.c
-rw-rw-r-- 1 ubuntu ubuntu 162 Mar 25 02:44 4-positive_or_not.c
-rw-rw-r-- 1 ubuntu ubuntu 636 Mar 25 02:44 5-print_number.c
-rw-rw-r-- 1 ubuntu ubuntu 178 Mar 25 02:47 my_functions.h
-rw-rw-r-- 1 ubuntu ubuntu 76 Mar 25 02:44 print_char.c
-rw-rw-r-- 1 ubuntu ubuntu 1392 Mar 25 02:46 print_char.o
ubuntu@ip-172-31-63-244:~/julien$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ubuntu@ip-172-31-63-244:~/julien$ l
total 68
drwxrwxr-x 2 ubuntu ubuntu 4096 Mar 25 02:47 .
drwxrwxr-x 19 ubuntu ubuntu 4096 Mar 25 02:44 ..
-rw-rw-r-- 1 ubuntu ubuntu 89 Mar 25 02:44 0-print_z.c
-rw-rw-r-- 1 ubuntu ubuntu 1400 Mar 25 02:47 0-print_z.o
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 1-print_alphabet.c
-rw-rw-r-- 1 ubuntu ubuntu 1408 Mar 25 02:47 1-print_alphabet.o
-rw-rw-r-- 1 ubuntu ubuntu 132 Mar 25 02:44 2-print_tebahpla.c
-rw-rw-r-- 1 ubuntu ubuntu 1408 Mar 25 02:47 2-print_tebahpla.o
-rw-rw-r-- 1 ubuntu ubuntu 166 Mar 25 02:44 3-print_base16.c
-rw-rw-r-- 1 ubuntu ubuntu 1464 Mar 25 02:47 3-print_base16.o
-rw-rw-r-- 1 ubuntu ubuntu 162 Mar 25 02:44 4-positive_or_not.c
-rw-rw-r-- 1 ubuntu ubuntu 1472 Mar 25 02:47 4-positive_or_not.o
-rw-rw-r-- 1 ubuntu ubuntu 636 Mar 25 02:44 5-print_number.c
-rw-rw-r-- 1 ubuntu ubuntu 2048 Mar 25 02:47 5-print_number.o
-rw-rw-r-- 1 ubuntu ubuntu 178 Mar 25 02:47 my_functions.h
-rw-rw-r-- 1 ubuntu ubuntu 76 Mar 25 02:44 print_char.c
-rw-rw-r-- 1 ubuntu ubuntu 1392 Mar 25 02:47 print_char.o
ubuntu@ip-172-31-63-244:~/julien$ ar -rc libschool.a *.o
ubuntu@ip-172-31-63-244:~/julien$ ar -t libschool.a
0-print_z.o
1-print_alphabet.o
2-print_tebahpla.o
3-print_base16.o
4-positive_or_not.o
5-print_number.o
print_char.o
ubuntu@ip-172-31-63-244:~/julien$ ranlib libschool.a
ubuntu@ip-172-31-63-244:~/julien$ cat main.c
void print_alphabet(void);

int main(void)
{
        print_alphabet();
        return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc main.c
/tmp/ccQa2r6L.o: In function `main':
main.c:(.text+0x5): undefined reference to `print_alphabet'
collect2: error: ld returned 1 exit status
ubuntu@ip-172-31-63-244:~/julien$ gcc main.c -L. -lschool -o alpha
ubuntu@ip-172-31-63-244:~/julien$ ./alpha
abcdefghijklmnopqrstuvwxyzubuntu
ubuntu@ip-172-31-63-244:~/julien$
```

## Tasks

### 0. A library is not a luxury but one of the necessities of life

Create the static library `libmy.a` containing all the functions listed below:

```sh
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your `main.h` file to your repository. It should at least contain all the prototypes of the above functions.

```sh
julien@ubuntu:~/0x09. Static Librairies$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
julien@ubuntu:~/0x09. Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
julien@ubuntu:~/0x09. Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
julien@ubuntu:~/0x09. Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
julien@ubuntu:~/0x09. Static Librairies$
```

### 1. Without libraries what have we? We have no past and no future

Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files that are in the current directory.

```sh
julien@ubuntu:~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
julien@ubuntu:~/0x09. Static Librairies$ ./create_static_lib.sh 
julien@ubuntu:~/0x09. Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$
```
