#include "main.h"

/**
 * malloc_checked - Entry point
 * Description: reads in b and then return
 * Return: pointer
 * @b: being read in
 *
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
