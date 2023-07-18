#include "main.h"
/**
*_isalpha - Entry point
*@c: using int c as parameter
*Return: 1 if alphabeth or 0 if anything else
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 90 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
