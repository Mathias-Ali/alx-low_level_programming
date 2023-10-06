#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Aleays 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long(sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)", (unsigned long)sizieof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
