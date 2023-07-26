#include "main.h"

/**
 * _strcat - Entry point
 * Description: concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x = x + 1;

	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y = y + 1;
		x = x + 1;
	}
	dest[x] = '\0';
	return (dest);
}
