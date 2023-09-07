#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list
 *
 * @head: a pointer to a pointer of type listint_t
 * @n: the list element
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pn;

	pn = malloc(sizeof(listint_t));
	if (pn == NULL)
		return (NULL);
	pn->n = n;
	pn->next = *head;
	*head = pn;
	return (*head);
}

