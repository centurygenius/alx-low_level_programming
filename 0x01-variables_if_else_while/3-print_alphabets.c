#include <stdio.h>
/**
*main - Entry point
*Description: This program prints both lowercase and uppercase letters
*Return: 0(successful)
*/
int main(void)
{
	char lc;
	char uc;

	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
		putchar(lc);
		}
		putchar(uc);
	}
	return (0);
}
