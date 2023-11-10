#include "variadic_functions.h"

/**
 * 
 *
 */

void print_all(const char * const format, ...)
{
const char *s; 
char c;
int i; 
float f; 
va_list ap;
int index = 0;
va_start(ap, format);
while (format[index] != '\0')
{
if (format[index] == 'c')
{
c = va_arg(ap, int);
printf("%c,", c);
}
if (format[index] == 'i')
{
i = va_arg(ap, int);
printf("%d,", i);
}
if (format[index] == 'f')
{
f = va_arg(ap, double);
printf(",%f\t", f);
}
if (format[index] == 's')
{
s = va_arg(ap, char*);
if (s != NULL)
{
printf("%s", s);
}
else
{
printf("(nil)");
}
}
index++;
}
va_end(ap);
printf("\n");
}
