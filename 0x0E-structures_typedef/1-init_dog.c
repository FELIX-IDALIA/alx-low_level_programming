#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - func that initializes a variable of type struct dog
 * @d: pointer to the struct dog to be initialized
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: no return type
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
