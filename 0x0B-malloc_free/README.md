# 0x0B. C - malloc, free

#### `c` `memory allocation`
0x0a - malloc & free - quick overview.pdf
Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)

### man or help:
- `malloc`
- `free`

## Learning Objectives
- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when use `malloc`
- How to use `valgrind` to check for memory leak

## Tasks

### 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails
