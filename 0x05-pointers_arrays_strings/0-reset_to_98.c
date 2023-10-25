#include "main.h"
/**
 *reset_to_98 - Entry point
 *Description: Changes value
 *Return: 0 if succesful
 * @n: being read in
 * return: reads value in
 */
void reset_to_98(int *n)
{
int x = 98;
int *ptr = &x;
*n = *ptr;
}
