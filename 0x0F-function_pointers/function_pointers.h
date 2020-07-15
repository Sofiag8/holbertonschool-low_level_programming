#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#include <stddef.h>
/* stddef.h defines various variable types and macros */
/* size_t is unsigned integral type and is the result of sizeof keyword */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
