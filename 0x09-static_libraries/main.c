#include "main.h"
#include <stdio.h>
int main(void)
{
char c = 'a';
int num = -42;
printf("Character '%c' is ", c);
if (!_isalpha(c))
printf("not ");
printf("alphabetic.\n");
printf("Character '%c' is ", c);
if (!_islower(c))
printf("not ");
printf("lowercase.\n");
printf("Character '%c' is ", c);
if (!_isdigit(c))
printf("not ");
printf("a digit.\n");
printf("The absolute value of %d is %d.\n", num, _abs(num));
c = 'A';
printf("Character '%c' is ", c);
if (!_isupper(c))
printf("not ");
printf("uppercase.\n");
return 0;
}
