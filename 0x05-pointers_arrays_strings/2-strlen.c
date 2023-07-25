#include "main.h"

/**
 * _strlen - Entry point
 * Description: This funtion returns the lenght of a string
 * @s: string
 * Return: lenght of string
 */

int _strlen(char *s)

{
	int loni = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	return (longi);
}

