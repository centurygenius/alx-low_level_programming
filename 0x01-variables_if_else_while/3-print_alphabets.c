#include <stdio.h>
/**
*main - Entry point
*Description: This program prints both lowercase and uppercase letters
*Return: 0(successful)
*/
int main(void)
{
	char lc = 'a';
	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
