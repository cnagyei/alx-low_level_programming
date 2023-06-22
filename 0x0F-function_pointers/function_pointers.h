#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void name_of_something(char *ptr);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
