#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * printLast - Print last number of nuber with a messge
 * @n:number to be printed on display
 * @lastDigit: the last  digit of the displayed number
 * @msg: message to follow a specific condition
 * Return:void(success)
 */

void printLast(int n, int lastDigit, char *msg)
{
	 printf("Last digit of %d is %d and is %s\n", n, lastDigit, msg);
}
/**
 * main -Entry point
 *
 * Return:always 0 (success)
 */

int main(void)
{
	int n;
	int lastDigit;;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printLast(n, lastDigit, "greater than 5");
	else if (lastDigit == 0)
		printLast(n, lastDigit, "0");
	else if (lastDigit <= 5)
		printLast(n, lastDigit, "less than 6 and not 0");
	return (0);
}

