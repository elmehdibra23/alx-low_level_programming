#include <stdio.h>
int main(void)
{
int count, n1 = 1, n2 = 2, next;
printf("%d, %d, ", n1, n2);
for (count = 3; count <= 98; count++)
{
next = n1 + n2;
n1 = n2;
n2 = next;
if (count != 98)
printf("%d, ", next);
else
printf("%d\n", next);
}
return 0;
}
