#include <stdio.h>
#define MAX_DIGITS 500
/**
 * print_string - Prints a string of digits
 * @str: The string to print
 */
void print_string(char str[MAX_DIGITS])
{
int i = 0;
while (i < MAX_DIGITS && str[i] == 0)
i++;
if (i == MAX_DIGITS)
putchar('0');
else
while (i < MAX_DIGITS)
putchar(str[i++] + '0');
}
/**
 * add_strings - Adds two strings of digits
 * @a: The first string to add
 * @b: The second string to add
 * @res: The resulting sum
 */
void add_strings(char a[MAX_DIGITS], char b[MAX_DIGITS], char res[MAX_DIGITS])
{
int i;
char carry = 0;
for (i = MAX_DIGITS - 1; i >= 0; i--)
{
res[i] = a[i] + b[i] + carry;
if (res[i] > 9)
{
res[i] -= 10;
carry = 1;
}
else
carry = 0;
}
}
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char prev[MAX_DIGITS] = {0};
char curr[MAX_DIGITS] = {0};
char next[MAX_DIGITS];
int i;
prev[MAX_DIGITS - 1] = 1;
curr[MAX_DIGITS - 1] = 2;
printf("1, ");
print_string(prev);
printf(", ");
print_string(curr);
for (i = 3; i <= 98; i++)
{
add_strings(prev, curr, next);
printf(", ");
print_string(next);
for (int j = 0; j < MAX_DIGITS; j++)
prev[j] = curr[j];
for (int j = 0; j < MAX_DIGITS; j++)
curr[j] = next[j];
}
printf("\n");
return (0);
}
