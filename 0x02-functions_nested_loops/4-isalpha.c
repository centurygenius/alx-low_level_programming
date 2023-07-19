#include "main.h"
/**
*_isalpha - Entry point
*@c: character to be checked
*Return: 1 if alphabeth or 0 if anything else
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
