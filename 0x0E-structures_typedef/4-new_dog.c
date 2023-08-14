#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter
 *
 * @str: the string to be copied
 *
 * Return: a pointer to the duplicated string
 * and returns NULL if str = NULL or there isn't sufficient
 * memory available
 */
char *_strdup(char *str)
{
	char *dup;
	int i, count = 0;

	if (str == NULL)
		return ('\0');
	for (i = 0; str[i] != '\0'; ++i)
		++count;
	dup = malloc(1 + sizeof(char) * count);
	if (dup == NULL)
		return ('\0');
	for (i = 0; str[i] != '\0'; ++i)
		dup[i] = str[i];
	return (dup);
}
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

	dogcopy = malloc(sizeof(dog_t));
	if (dogcopy == NULL)
		return ('\0');
	dogcopy->name = name ? _strdup(name) : NULL;
	if (name && dogcopy->name == NULL)
	{
		free(dogcopy);
		return ('\0');
	}
	dogcopy->age = age;
	dogcopy->owner = owner ? _strdup(owner) : NULL;
	if (owner && dogcopy->owner == NULL)
	{
		free(dogcopy->name);
		free(dogcopy);
		return ('\0');
	}
	return (dogcopy);
}

