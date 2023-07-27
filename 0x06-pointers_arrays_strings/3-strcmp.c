#include "main.h"

/**
 * _strcmp - Entry point
 * Description: compares strings values
 * @s1: input value
 * @s2: input value
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y = s1[x] - s2[x];

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (y);
		}
		x++;
	}
	return (0);
}
