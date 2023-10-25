#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry point
 * Description: checks if it is digit
 * Return: 1 if digit 0 if not
 * @c: being read in
 */
int _isdigit(int c)
{
if (isdigit(c))
	return (1);
else
	return (0);
}
