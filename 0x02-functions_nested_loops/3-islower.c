#include "main.h"
/**
*_islower - Entry point
*Parameter: checks for a character
*Return: 1 if c is lowercase and 0 for anything else
*/
int _islower(int c)
{
	if (c >= 97 && <= 122)
	{
		return (1);
	}
	else
		return (0);
}
