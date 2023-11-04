#include "main.h"
/**
 * _abs - Entry point
 * function that computes the absolute value of an integer
 * Return:always return the absolute valuei
 * @myInt:input integer
 */
int _abs(int i)
{
	if (i < 0)
	{
		int j;

		j = i * - 1;
		return (j);
	}
	else
	{
		return (i);
	}
}
