#include "main.h"
/**
 * _strlen_recursion - Retuuns length of a string
 * @s: pointer to first character of string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
