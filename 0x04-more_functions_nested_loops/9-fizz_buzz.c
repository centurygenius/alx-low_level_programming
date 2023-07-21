#include <stdio.h>

/**
 * main - Entry point
 * Description: prints 1 to 100 but prints fizz
 *for multiples of 3, buzz for multiples of 5
 *and fizzbuzz for multiples of both 3 and 5
 * Return: 0(successful)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%x", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
