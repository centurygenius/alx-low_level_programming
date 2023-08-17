#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * Description: sums all of its parameters
 * @n: total number of parameters
 * @...: ellipsis represents variable number of parameters
 * Return: 0 if n == 0
 *         otherwise the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlists;

	va_start(vlists, n);

	if (n == 0)
		return (0);

	unsigned int i, sum = 0;

	i = 0;
	while (i < n)
	{
		sum += va_arg(vlists, int);
		i++;
	}
	va_end(vlists);
	return (sum);
}
