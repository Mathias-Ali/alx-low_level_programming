#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
 * A program that prints the lowercase alphabets
 * in reverse followed by a new line
 */
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
