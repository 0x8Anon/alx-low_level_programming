#include <stdio.h>
/**
 *main - prints main function
 *Description: prints all letters except q and e
 *Return: 0 if succesful
 *
 */
int main(void)
{
char ab = 'a';
while (ab <= 'z')
{
if (ab != 'q' && ab != 'e')
putchar(ab);
ab++;
}
putchar('\n');
return (0);
}
