#include <stdio.h>
/**
*main - Entry point
*Description: This program prints lowercase alphabeths
*Parameters: using only putchar function
*Return: 0(successful)
*/
int main(void)
{
	char lcaseAlphabeth;

	for (lcaseAlphabeth = 'a'; lcaseAlphabeth <= 'z'; lcaseAlphabeth++)
	{
		putchar(lcaseAlphabeth);
	}
	putchar('\n');
	return (0);
}
