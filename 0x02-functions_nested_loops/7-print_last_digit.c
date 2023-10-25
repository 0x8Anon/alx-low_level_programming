#include "main.h"
/**
 *print_last_digit - Entry point
 *Description: deez
 *Return: 0 if succesful
 * @x: charachter being read;
 */
int print_last_digit(int x)
{
int last_digit = x % 10;
if (last_digit < 0)
{
last_digit *= -1;
}
_putchar(last_digit + '0');
return (last_digit);
}
