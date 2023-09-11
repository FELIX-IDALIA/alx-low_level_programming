#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function, makes a new dog, memory and all
 * @name: the name to create memory, and assign to for dog
 * @age: assigned age for dog
 * @owner: the owner to create memory and assign to for dog
 *
 * Return: returns pointer to new dog_t (struct dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	if (name == NULL)
		n_dog->name = NULL;
	else
	{
		n_dog->name = malloc(_strlen(name) + 1);
		if (n_dog->name == NULL)
		{
			free(n_dog);
			return (NULL);
		}
		n_dog->name = _strcpy(n_dog->name, name);
	}
	if (owner == NULL)
		n_dog->owner = NULL;
	else
	{
		n_dog->owner = malloc(_strlen(owner) + 1);
		if (n_dog->owner == NULL)
		{
			free(n_dog->name);
			free(n_dog);
			return (NULL);
		}
		n_dog->owner = _strcpy(n_dog->owner, owner);
	}
	n_dog->age = age;
	return (n_dog);
}
/**
 * _strlen - function, gets length of string
 * @s: string to get the length
 *
 * Return: returns the length of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies string from src to dest
 *
 * @dest: dest of the string pointer
 * @src: a pointer to src string to copy from
 *
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
