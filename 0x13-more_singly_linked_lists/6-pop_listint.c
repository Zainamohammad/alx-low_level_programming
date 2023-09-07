#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head
 * node’s data (n)
 *
 * @head: a pointer to a pointer of type listint_t
 * Return: the node's data, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *pn;
	int n;

	if (*head == NULL)
		return (0);
	pn = malloc(sizeof(listint_t));
	if (pn == NULL)
		return ('\0');
	n = (*head)->n;
	pn = *head;
	*head = (*head)->next;
	free(pn);
	return (n);
}
