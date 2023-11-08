#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Entry point
 * Description: printing name
 * @f: read in
 * @name: being printed
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
