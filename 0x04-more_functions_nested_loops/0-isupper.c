#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c:charater to be checked
 * Return:always 1 (success)
 * Else returns 0
 */
int _isupper(int c)
{
	int myChar;

	myChar = c;
	if (myChar >= 60 && myChar <= 90)
		return (1);
	else
		return (0);
}
