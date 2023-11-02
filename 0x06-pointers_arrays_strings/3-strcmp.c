#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry point
 * Description: compares 2 ints
 * Return: s1-s2 if valid
 * @s1: read in
 * @s2: read in
 *
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
