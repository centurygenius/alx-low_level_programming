#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - Entry point
 * Description: prints all elements of listint_t
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).(n));
		number++;
		h = (*h).(next);
	}

	return (number);
}
