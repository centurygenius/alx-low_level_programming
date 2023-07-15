#include <stdio.h>
/**
*main - Entry point
*Description: This program prints base 16 numbers
*Parameters: using only putchar function
*Return: 0(successful)
*/
int main(void)
{
	int i;
	char lCase;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (lCase = 'a'; lCase <= 'f'; lCase++)
	{
		putchar(lCase);
	}
putchar('\n');
return (0);
}
