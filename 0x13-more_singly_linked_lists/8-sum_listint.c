#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list
 *
 * @head: a pointer to a listint_t list
 * Return: the sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pn;

	for (pn = head; pn != NULL; pn = pn->next)
		sum = sum + pn->n;
	return (sum);
}
