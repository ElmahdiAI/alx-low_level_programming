#include "dog.h"
/**
 * free_dog- function used to free a created dog.
 * @d: targeted dog to free
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
