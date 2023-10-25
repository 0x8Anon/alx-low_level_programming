#include "main.h"
/**
 *swap_int - Entry point
 *Description: Changes value
 *Return: 0 if succesful
 * @a: being read in
 * return: returns value b
 * @b: deez
 * returnss: value a
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
