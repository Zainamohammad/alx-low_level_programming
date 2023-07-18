#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: returns a pointer to the new dog variable or
 * NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcopy;

	if (age < 0 || !name || !owner)
		return ('\0');
	dogcopy = malloc(sizeof(dog_t));
	if (dogcopy == NULL)
		return ('\0');
	dogcopy->name = strdup(name);
	if (dogcopy->name == NULL)
	{
		free(dogcopy);
		return ('\0');
	}
	dogcopy->age = age;
	dogcopy->owner = strdup(owner);
	if (dogcopy->owner == NULL)
	{
		free(dogcopy->name);
		free(dogcopy->owner);
		free(dogcopy);
		return ('\0');
	}
	return (dogcopy);
}
