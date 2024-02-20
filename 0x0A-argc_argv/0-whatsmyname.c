#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of arguments to main
 * @argv: pointer to string arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
