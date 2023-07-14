#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Entry point
*Description: This program prints the last digit of random numbers
*Parameters: It uses printf, srand, time,and rand functions
*Return: 0(successful)
*/
int main(void)
{
	int n;
	int ldgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (ldgit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldgit);
	}
	else if (ldgit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldgit);
	}
	else if (ldgit < 6 && ldgit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldgit);
	}
	return (0);
}
