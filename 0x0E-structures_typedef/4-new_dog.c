#include "dog.h"
/**
 * new_dog- function used to create new struct dog.
 * @name: giving name
 * @age: giving age
 * @owner: giving owner
 * Return: the new created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL)
		name = '';
	if (owner == NULL)
		owner = '';
	while (name[++name_len])
	;
	while (owner[++owner_len])
	;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * name_len + 1);
	my_dog->owner = malloc(sizeof(char) * owner_len + 1);
	if (my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		my_dog->name[i] = name[i];
	my_dog->name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[owner_len] = '\0';
	my_dog->age = age;
	return (my_dog);
}
