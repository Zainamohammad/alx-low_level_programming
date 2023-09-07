#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: a pointer to a listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *pn;

	for (; head != NULL;)
	{
		pn = head;
		head = head->next;
		free(pn);
	}
}
