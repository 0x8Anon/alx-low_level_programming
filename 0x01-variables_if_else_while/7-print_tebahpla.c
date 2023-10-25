#include <stdio.h>
/**
 *main - prints alphabet I guess
 *Description: refer to top
 *Return: 0 if succesful
 */
int main(void)
{
char ab = 'z';
while (ab >= 'a')
{
putchar(ab);
ab--;
}
putchar('\n');
return (0);
}
