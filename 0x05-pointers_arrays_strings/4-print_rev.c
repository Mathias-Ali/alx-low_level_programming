#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * Followed by a new line
 * @s:Pointer to string
 * Return:void
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
/**
 * _strlen - prints lenght of a string
 * Return:length of string
 * @s:pointer to a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

