#include "main.h"
/**
 * _strcat - Entry point
 * Description: concats two strings
 * Return: dest if succesful
 * @dest: being read in
 * @src: being concatenated to dest
 *
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}
