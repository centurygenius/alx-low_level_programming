#include "main.h"

/**
 * reverse_array - Entry point
 * Description: reverses array of integers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, t;

	for (x = 0; x < n--; x++)
	{
		t = a[x];
		a[x] = a[n];
		a[n] = t;
	}
}
