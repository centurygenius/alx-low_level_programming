#include <stdio.h>
/**
*main - Entry point
*Description: This program prints lowercase alphabeths in reverse
*Parameter: using only putchar function
*Return: 0(successful)
*/
int main(void)
{
	char lCase;

	lCase = 'z';

	while (lCase >= 'a')
	{
		putchar(lCase);
		lCase--;
	}
putchar('\n')
return (0);
}
