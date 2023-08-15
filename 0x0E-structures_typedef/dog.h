#ifndef DOG_H
#define DOH_H
#include <stdio.h>
#include <stdlib>
/**
 * struct dog - info about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owneir;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
