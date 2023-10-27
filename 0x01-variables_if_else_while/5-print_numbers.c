#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
 * A program that prints all single digit numbers
 * of base 10 starting from 0 followed by a new line
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number ++;
	}
	printf("\n");
	return (0);
}
