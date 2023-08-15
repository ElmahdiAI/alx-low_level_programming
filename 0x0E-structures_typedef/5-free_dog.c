#include "dog.h"
/**
 * free_dog- function used to free a created dog.
 * @d: targeted dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
