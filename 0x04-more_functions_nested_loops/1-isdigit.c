#include "main.h"

/**
 * _isdigit - checks for digit
 *@c: character to be checked
 *Return: 1 for a digit or 0 for something else
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
