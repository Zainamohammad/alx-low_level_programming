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
	dup = malloc(sizeof(char) * (count + 1));
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
	dog_t *doggy;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return ('\0');
	if (_strdup(name) == NULL)
	{
		free(doggy);
		return ('\0');
	}
	doggy->name = _strdup(name);
	doggy->age = age;
	if (_strdup(owner) == NULL)
	{
		free(doggy->name);
		free(doggy);
		return ('\0');
	}
	doggy->owner = _strdup(owner);
	return (doggy);
}

