#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores some information of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: a struct reffered to as dog which stores,
 * dog's name, age and the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - structure for typedef dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
