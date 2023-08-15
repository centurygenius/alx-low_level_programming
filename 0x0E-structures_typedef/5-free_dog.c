#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(struct dog_t);
	if (d == NULL)
		return (NULL);
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
