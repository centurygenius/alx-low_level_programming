#include <stdio.h>
/**
*main - Entry point
*Description: This program prints combination of single digit
*Parameter: using only putchar function
*Return: 0(successful)
*/
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
