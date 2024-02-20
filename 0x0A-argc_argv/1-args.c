#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of elements passed to main
 * @argv: pointer to array of strings
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 1 || argv[1])
	{
		printf("%d\n", argc -= 1);
	}
	return (0);
}

