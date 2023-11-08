#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - Entry point
 * Description: iterating through array
 * @array: read in
 * @size: read in
 * @action: read in
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
