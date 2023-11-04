#include "main.h"
/**
 * _isalpha - Entry point
 * Function that checks for alphabetic character
 * Return:always 1 if c is a letter, lowercase or uppercase
 * Returs:always 0 if otherwise
 * @c:input character
 */
int _isalpha(int c)
{
	int i;

	i = c;
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
