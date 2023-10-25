#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @n: parsed through
 * @a: array string
 *
 *
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
if (j != n - 1)
{
printf("%d, ", a[j]);
}
else
printf("%d", a[j]);
}
printf("\n");
}
