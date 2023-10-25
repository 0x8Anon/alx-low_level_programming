#include <stdio.h>
/**
 *main - see below
 *Description: Prints a-z in small letters & capital letters followed by \n
 *Return: successful if 0
 */
int main(void)
{
char ab = 'a';
char AB = 'A';
while (ab <= 'z')
{
putchar(ab);
ab++;
}
while (AB <= 'Z')
{
putchar(AB);
AB++;
}
putchar('\n');
return (0);
}
