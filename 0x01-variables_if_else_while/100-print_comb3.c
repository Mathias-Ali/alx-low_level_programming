#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
 */
int main(void)
{
	int ch;
	int ci;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ci = 48; ci <= 57; ci++)
		{
			if (ch >= ci)
			{
				continue;
			}
			else
			{
				putchar(ch);
				putchar(ci);
				if (ch < 56)
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
