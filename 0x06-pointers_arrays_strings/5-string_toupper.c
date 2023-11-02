#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Entry point
 * Description: makes string uppercase
 * Return: str is succesful
 * @str: being read in
 *
 *
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}
return (str);
}
