#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - a function that prints all the elements
 * of a list_t list
 *
 * @h: a pointer to a list of type list_t
 *
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *pn;
	size_t i = 0;

	for (pn = h; pn != NULL; pn = pn->next)
	{
		if (pn->str == NULL)
			printf("[%u] (nil)\n", pn->len);
		else
			printf("[%u] %s\n", pn->len, pn->str);
		++i;
	}
	return (i);
}

