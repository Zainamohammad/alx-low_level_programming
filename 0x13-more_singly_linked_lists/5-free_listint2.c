#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: a pointer to a pointer of type listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *pn;

	for (; *head != NULL;)
	{
		pn = *head;
		(*head) = (*head)->next;
		free(pn);
	}
}
