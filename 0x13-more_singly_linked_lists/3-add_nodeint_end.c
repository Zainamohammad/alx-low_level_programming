#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list
 *
 * @head: a pointer to a pointer to a listint_t list
 * @n: the list element
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pn, *px, *pl;

	pl = malloc(sizeof(listint_t));
	if (pl == NULL)
		return (NULL);
	px = *head;
	for (pn = *head; pn != NULL; pn = pn->next)
		px = pn;
	pl->n = n;
	pl->next = NULL;
	if (px == NULL)
		*head = pl;
	else
		px->next = pl;
	return (pl);
}
