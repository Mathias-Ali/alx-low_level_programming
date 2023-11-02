#include "main.h"
/**
 * main - Entry point
 * Return:always 0 (success)
 * Program that prints _putchar
 * followed by a new line
 */
int main(void)
{
	char myChar[] = "_putchar";
	int i = 0;
	int len = sizeof(myChar) - 1;

	while (i <= len)
	{
		_putchar(myChar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
