#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using a given function
 * @name: pointer to the name string
 * @f: pointer to the function to be used for printing
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
