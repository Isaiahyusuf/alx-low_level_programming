#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a text according to number
 * Return: always (success)
 *
 */

int main(void)
{
	int n, lastd;
	srand(time(0))
	n = rand() - RAND_MAX / 2;
	lastd = n 10;
	if (lastd > 5)
	{
	printf("last digit of %d is and is greater than 5\n", lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit of %d and is  0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("last digit of %d is %d is less than 5 and not 0\n", n, lastd);
	}
	return (0);

}
