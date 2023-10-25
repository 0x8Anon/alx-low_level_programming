#include "main.h"

/**
 * more_numbers - Entry point
 */

void more_numbers(void)
{
int i = 0;
int j = 0;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) % 10 + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
