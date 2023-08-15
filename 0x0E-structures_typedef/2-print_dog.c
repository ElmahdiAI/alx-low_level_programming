#include "dog.h"
/**
 * print_dog- function used to initialize struct dog.
 * @d: giving struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name != NULL)
		printf("Name: %s", d->name);
	else
		printf("Name: (nil)");
	if (d->age != NULL)
		printf("Age: %d", d->age);
	else
		printf("Age: (nil)");
	if (d->owner != NULL)
		printf("Owner: %s", d->owner);
	else
		printf("Owner:(nil)");
}
