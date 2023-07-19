#include "main.h"
/**
*_islower - Entry point
*@c: character to be checked
*Return: 1 if c is lowercase and 0 for anything else
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
