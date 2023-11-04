#include "main.h"
/**
 * print_last_digit - Entry point
 * Function that prints the last digit of a number
 * Return:value of last digit
 * @i:input number
 */
int print_last_digit(int i)
{
	int lastd = i % 10;

	if (lastd < 0)
		lastd = lastd * -1;
	_putchar('0' + lastd);
	return (lastd);
}
