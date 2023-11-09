#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * Description: Write a function that prints strings, followed by a new line.
 * @separator: separates charachters.
 * @n: read in.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
const char *str;
unsigned int i;
va_list ap;
va_start(ap, n);


for (i = 0; i < n; i++)
{
str = va_arg(ap, const char *);
if (str == NULL)
{
printf("(NIL)");
}
	else
	printf("%s", str);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}

}

va_end(ap);
printf("\n");
}
