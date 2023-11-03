#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - Entry point
 * Description: recursion
 *@s: read in
 *
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
puts(++s);
}
else
{
_putchar('\n');
}

}
