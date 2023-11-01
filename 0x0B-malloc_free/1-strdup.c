#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - main function
 * Description: returns pointer to new space
 * Return: newstring
 * @str : being read
 *
 */
char *_strdup(char *str)
{

int length = 0;
int i;
char *new_string;
if (str == NULL)
{
return (NULL);
}
while (str[length] != '\0')
{
length++;
}
new_string = (char *)malloc(length + 1);
if (new_string == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++)
{
new_string[i] = str[i];
}
new_string[i] = '\0';
return (new_string);
}
