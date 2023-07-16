#include <stdio.h>
/**
*main - Entry point
*Description: This program prints combination of numbers
*Return: 0(successful)
*/
int main(void)
{
	int i = '0';
	int k = '0';

	while (i <= '9')
	{
		while (k <= '9')
		{
			if ((i < k) || (i == k))
			{
				putchar(i);
				putchar(k);
				if (i == '8' && k == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		i++;
	}
	return (0);
}
