#include "main.h"
#include <stdio.h>
/**
 * _strncat - Entry point
 * Description: concats two strings
 * Return: dest if succesful
 * @dest: being read in
 * @src: being concatenated to dest
 * @n: we are iterating through it
 */
char *_strncat(char *dest, char *src, int n)
{
int destI = 0;
int i;
while (dest[destI] != '\0')
{
destI++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[destI++] = src[i];
}
dest[destI] = '\0';
return (dest);
}
