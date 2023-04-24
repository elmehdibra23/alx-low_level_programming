#ifndef MAIN_H
#define MAIN_H

#include "function_pointers.h"

void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */

