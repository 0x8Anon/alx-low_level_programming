#include <stdio.h>
/**
 *main - Entry points
 *Description: prints number from zero to nine
 *Return: 0 if succesful
 */
int main(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
