#include "lists.h"
/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 *
 * @h: a pointer to a listint_t list
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pn;
	size_t i = 0;

	for(pn = h; pn != NULL; pn = pn->next)
		++i;
	return (i);
}
