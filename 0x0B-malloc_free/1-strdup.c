#include "main.h"

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
return (length++);
}
*new_string = (char *)malloc(length + 1);
for (int i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}
return (new_string);
}
