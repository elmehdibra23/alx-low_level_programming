#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints any given argument(s) of type char, int, float, or char *
* @format: a list of types of arguments passed to the function
* @...: a variable number of arguments
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *separator = "", *str;
char c;
int d;
float f;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%s%c", separator, c);
separator = ", ";
break;
case 'i':
d = va_arg(args, int);
printf("%s%d", separator, d);
separator = ", ";
break;
case 'f':
f = va_arg(args, double);
printf("%s%f", separator, f);
separator = ", ";
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
separator = ", ";
break;
}
i++;
}
printf("\n");
va_end(args);
}
