#include "dog.h"
/**
 * init_dog- function used to initialize struct dog.
 * @d: giving struct dog
 * @name: giving name
 * @age: giving age
 * @owner: giving owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
