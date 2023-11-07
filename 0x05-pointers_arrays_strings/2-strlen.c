#include "main.h"
/**
 * _strlen - Prints the length of a string
 * Return:The length of a string (int)
 * @s: The input string whose length is determined
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
