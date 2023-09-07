#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 *
 * @head: a pointer to a pointer of type listint_t
 * @idx: the index of the list where the new node
 * should be added
 * @n: the element
 *
 * Return: the address of the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *pn, *px;

	pn = malloc(sizeof(listint_t));
	if (pn == NULL)
		return (NULL);
	pn->n = n;
	if (idx == 0)
	{
		pn->next = *head;
		*head = pn;
		*head = pn;
	}
	else
	{
		for (px = *head; i <= idx - 1; ++i)
		{
			if (px == NULL)
				return (NULL);
			px = px->next;
		}
		pn->next = px->next;
		px->next = pn;
	}
	return (pn);
}
