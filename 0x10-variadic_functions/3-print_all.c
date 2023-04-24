#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
    va_list args;
    char *str;
    int i = 0;
    char current;

    va_start(args, format);
    while (format && format[i])
    {
        current = format[i];
        if (i > 0)
            printf(", ");
        switch (current)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                printf("%s", str ? str : "(nil)");
                break;
            default:
                i++;
                continue;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}

