#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * Return: runs if return is 0
 */
int main(void)
{
int i = 0;
for (i = 0; i <= 7; i++)
{
int j = 0;
for (j = i + 1; j <= 8; j++)
{
int k = 0;
for (k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i == 7 && j == 8 && k == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
