#include "main.h"
/**
 * _abs - Entry point
 * Function that computes absolute value of an integer
 * @i:input number
 * Return:absolute value
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
