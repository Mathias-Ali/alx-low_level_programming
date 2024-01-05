#include <stdio.h>
#include "main.h"
/**
 * put_demacation - adds commas and space
 * Return:void
 */
void put_demacation(void)
{
	putchar(',');
	putchar(' ');
}
/**
 * print_to_98 - prints numbers starting from n
 * and ending at 98
 *
 * @n: input/starting value
 *
 * Return:void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				put_demacation();
			}
		}
	}
	else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				put_demacation();
			}
		}
	}
	putchar('\n');
}
