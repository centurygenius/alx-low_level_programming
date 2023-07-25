#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: This program generates random valid passwords
 *
 * Return: 0 (successful)
 */

int main(void)

{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i = i + 1)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
