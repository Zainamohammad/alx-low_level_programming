#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 *
 * @head: a pointer to a list_t list
 */
void free_list(list_t *head)
{
	list_t *pn;

	for (; head != NULL;)
	{
		pn = head;
		head = head->next;
		free(pn);
	}

}
