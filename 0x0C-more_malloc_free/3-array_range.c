#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: Pointer to the newly created array, NULL on failure.
 */
int *array_range(int min, int max)
{
    int *array;
    int i;

    if (min > max)
        return (NULL);

    array = malloc((max - min + 1) * sizeof(int));
    if (array == NULL)
        return (NULL);

    for (i = 0; min <= max; i++, min++)
        array[i] = min;

    return (array);
}

