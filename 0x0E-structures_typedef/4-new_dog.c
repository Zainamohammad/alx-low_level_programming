#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - a function that prints the length of
 * a string
 *
 * @s: the string the length of which is to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; ++i)
		++count;
	return (count);
}
/**
 * _strcpy - a function that copies a string
 * into a buffer
 *
 * @dest: a pointer to the buffer
 * @src: the string to be copied
 *
 *
 * Return: a pointer to the buffer (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		++count;
	}
	for (i = 0; i <= count; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
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
		return ('\0');
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return ('\0');
	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return ('\0');
	}
	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return ('\0');
	}
	doggy->name = _strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcpy(doggy->owner, owner);
	return (doggy);
}

