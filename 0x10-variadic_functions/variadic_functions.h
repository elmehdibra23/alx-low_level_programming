#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct print_fmt - A structure to define a print format
 * @type: The format type (char, integer, float, string, or NULL for undefined)
 * @func: A function pointer to a function that prints the corresponding type
 */
typedef struct print_fmt
{
char *type;
void (*func)(va_list);
} print_fmt_t;
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H */
