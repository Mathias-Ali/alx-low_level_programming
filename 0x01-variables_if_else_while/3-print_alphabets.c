#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
 */
int main(void)
{
	int ch;
	int CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH  <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
