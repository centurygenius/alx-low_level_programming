#include "main.h"

/**
 * swap_int - Entry point
 * Description: This funtion swaps the values of two integers
 * @a: integer a
 * @b: integer b
 *
 */

void swap_int(int *a, int *b)

{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

