#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
 * A prgram that prints all single single digit numbers
 * of base 10 starting from zero followed by a newline
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
