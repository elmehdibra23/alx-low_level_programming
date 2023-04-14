#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, j, flag = 0;
    int a, b;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    for (i = 1; argv[i]; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Error\n");
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d\n", a * b);

    return 0;
}

