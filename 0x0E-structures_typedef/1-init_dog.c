#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initializes a variable
 * of type struct dog
 *
 * @d: a pointer of type struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
