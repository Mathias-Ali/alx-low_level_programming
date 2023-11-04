#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:always void (success)
 * Function that prints alphabets in lower case
 * followed by a new line
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

