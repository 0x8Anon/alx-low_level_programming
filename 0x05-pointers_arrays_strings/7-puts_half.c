#include "main.h"
#include <string.h>
/**
 * puts_half - Entry point
 * @str: read into
 *
 */
void puts_half(char *str)
{
int str2 = 0;
int n;
while (str[str2] != '\0')
{
str2++;
}
if (str2 + 1 % 2 != 0)
{
n = (str2 - 1) / 2;
}
else
n = (str2 / 2);
n++;
for (str2 = n;  str[str2] != '\0'; str2++)
_putchar(str[str2]);
_putchar('\n');

}
