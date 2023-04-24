#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, or one of the error codes on failure
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    operation = get_op_func(argv[2]);
    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((operation == op_div || operation == op_mod) && b == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = operation(a, b);
    printf("%d\n", result);

    return (0);
}

