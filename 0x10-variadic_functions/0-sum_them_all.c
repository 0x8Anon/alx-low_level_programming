#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * Description: sum of all parameters
 * Return: 0
 * @n: being read in
 *
 */

int sum_them_all(const unsigned int n, ...)
{
int total;
unsigned int i;
va_list args;
if (n == 0)
{
return (0);
}

va_start(args, n);

total = 0;

for (i = 0; i < n; i++)
{
total += va_arg(args, int);
}
va_end(args);
return (total);
}
