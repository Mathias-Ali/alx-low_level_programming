#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1 (success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10\
-19\n";
	write(2, quote, sizeof(quote) - 1);
	return (1);

