#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 *
 * @h: a pointer to a node of type list_t
 * Return: returns the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *pn;
	size_t i = 0;

	for (pn = h; pn != NULL; pn = pn->next)
		++i;
	return (i);
}

