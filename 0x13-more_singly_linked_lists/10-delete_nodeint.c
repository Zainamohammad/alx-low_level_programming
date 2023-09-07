#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list
 *
 * @head: a pointer to a pointer of type listint_t
 * @index: the index of the node to be removed
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pn, *px;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		pn = *head;
		*head = (*head)->next;
		free(pn);
	}
	else
	{
		for (px = *head; i < index - 1; ++i)
		{
			if (px == NULL)
				return (-1);
			px = px->next;
		}
		pn = px->next;
		px->next = pn->next;
		free(pn);
	}
	return (1);
}
