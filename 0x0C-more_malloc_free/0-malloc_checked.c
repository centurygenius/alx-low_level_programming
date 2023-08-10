#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Entry point
 * Description: allocates memory using malloc
 * @b: integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
