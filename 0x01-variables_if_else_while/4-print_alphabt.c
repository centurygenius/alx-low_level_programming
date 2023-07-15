#include <stdio.h>
/**
*main - Entry point
*Description: This program prints lowercase alphabeths without q and e
*Parameter: using only putchar function
*Return: 0(successful)
*/
int main(void)
{
int lCase = 'a';

while (lCase <= 'z')
	{
	if (lCase == 'q' || lCase == 'e')
	{
		lCase++;
	}
	else
	{
		putchar(lCase);
		lCase++;
	}
	}
putchar('\n');
return (0);
}
