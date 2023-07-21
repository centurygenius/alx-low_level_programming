#include "main.h"
#include <dtsio.h>

/**
 *main - Entry point
 *Return: 0(successful)
 */

int main(void)

{
	unsigned long int l, n;

	l = n = 612852475143;

	for (l = 3; l < 782849; l = l + 2)
	{
		while ((n % l == 0) && (n != l))
			n = n / l;
	}
	printf("%lu\n", n);
	return (0);
}
