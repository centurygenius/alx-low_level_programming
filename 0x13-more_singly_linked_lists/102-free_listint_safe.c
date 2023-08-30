#include "lists.h"

/**
 * free_listint_safe - Entry point
 * Description: frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	listint_t *temp;
	int diff;

	if (!*h)
		return (0);
	if (!h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;
	return (lenght);
}
