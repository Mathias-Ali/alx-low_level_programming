#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a:swap the value of this with variable below
 * @b:swap the value of this with variable above
 * Return:void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

