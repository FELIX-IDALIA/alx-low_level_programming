#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function, frees dog struct
 * @d: the pointer to struct, to free
 *
 * Return: returns 0 when success
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
