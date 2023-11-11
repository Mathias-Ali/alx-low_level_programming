#include "main.h"
/**
 * rev_string - Reverses a string
 * Return:void
 * @s:pointer to a string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char temp;

	len = _strlen(s) - 1;
	for (i = 0; i <= len; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = temp;
		len--;
	}
}
/**
 * _strlen - Returns the lenght of a string
 * Return:lenght value
 * @s:pointer to a string
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
