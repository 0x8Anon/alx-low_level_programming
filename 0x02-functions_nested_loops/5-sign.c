#include "main.h"
/**
 * print_sign - Entry point
 * Description: deez
 * Return: 1 if greater 0 if 0 and -1 if less
 * @n: Char to be checked
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (1);
}
}
