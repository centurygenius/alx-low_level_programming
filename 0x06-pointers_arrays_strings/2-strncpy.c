#include "main.h"

/**
 * _strncpy - Entry point
 * Description: copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
