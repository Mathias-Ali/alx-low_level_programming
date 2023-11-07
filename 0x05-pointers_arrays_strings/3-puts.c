#include "main.h"
/**
 * _puts - Prints a string
 * followed by a new line
 * Return:void;
 * @str: pointer to the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		int i = 0;

		_putchar(*(str + i));
		i++;
		str++;
	}
	_putchar('\n');
}
