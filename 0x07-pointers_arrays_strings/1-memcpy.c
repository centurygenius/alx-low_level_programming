#include "main.h"
/**
 *_memcpy - Entry point
 *Description: This program is a function that copies memory area
 *@dest: memory destination
 *@src: memory source
 *@n: number of bytes
  *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	int x;
	int i = n;

	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
