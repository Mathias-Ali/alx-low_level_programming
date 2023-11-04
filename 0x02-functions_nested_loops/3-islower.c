#include "main.h"
/**
 * _islower - Entry point
 * Function that checks for lowercase characters
 * Returns:always 1 when c is lower
 * Return:always 0 when c is not lower
 * @c:character to be checked
 */
int _islower(int c)
{
	int i;

	i = c;
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
