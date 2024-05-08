#include "search_algos.h"
#include <math.h>

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers with the use of binary search algo.
  * @array: A pointer to the first element of the array
  * @size: Array size
  * @value: The value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		i = round(mid);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

