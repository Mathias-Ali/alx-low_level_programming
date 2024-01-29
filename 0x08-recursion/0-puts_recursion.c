#include "main.h"
/**
 * _puts_recursion - prints a string followed
 * by a new line
 *
 * @s: pointer to first character of input string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		++len;
		s = s + len;
		_puts_recursion(s);
	}
}

