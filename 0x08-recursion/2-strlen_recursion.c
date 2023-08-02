#include "main.h"

/**
 * _strlen_recursion - Entry point
 * Description: Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)

{
	while (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
