#include <stdio.h>
/**
*main - Entry point
*Description: This program prints 0 to 9
*Parameter: using only putchar function
*Return: 0(successful)
*/
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
putchar('\n');
return (0);
}
