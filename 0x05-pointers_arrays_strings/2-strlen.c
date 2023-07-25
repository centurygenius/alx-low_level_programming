#include "main.h"

/**
 * _strlen - Entry point
 * Description: This funtion returns the lenght of a string
 * @s: string
 * Return: lenght of string
 */

int _strlen(char *s)

{
	int count = 0;

	while (*s != '\0')
	{
		count = count + 1;
		s++;
	}
	return (count);
}

