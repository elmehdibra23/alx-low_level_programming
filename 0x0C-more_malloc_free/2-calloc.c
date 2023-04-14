#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in the array.
 *
 * Return: Pointer to the allocated memory, NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *allocated_memory;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    allocated_memory = malloc(nmemb * size);
    if (allocated_memory == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        allocated_memory[i] = 0;

    return (allocated_memory);
}

