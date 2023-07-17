#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 *
 * @d: a pointer of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age >= 0)
		printf("Name: %s\nAge: %0.1f\nOwner: %s\n", d->name, d->age, d->owner);
	else
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name,  d->owner);
}
