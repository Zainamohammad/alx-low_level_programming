#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list
 *
 * @head: a pointer of type listint_t
 * @index: the index of the node to be returned
 *
 * Return: the node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pn;

	for (pn = head; i < index; pn = pn->next, ++i)
	{
		if (pn == NULL)
			return (NULL);
	}
	return (pn);
}
