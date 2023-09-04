#include "lists.h"
/**
 * add_node_end - a function that adds a new node at
 * the end of a list_t list
 *
 * @head: a pointer to a pointer to a node of type list_t
 * @str: the string to be added to the list as new element
 *
 * Return: returns the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pn, *px, *py;

	pn = malloc(sizeof(list_t));
	if (pn == NULL)
		return (NULL);
	py = *head;
	for (px = *head; px != NULL; px = px->next)
		py = px;
	pn->str = strdup(str);
	pn->len = strlen(str);
	pn->next = NULL;
	if (py == NULL)
		*head = pn;
	else
		py->next = pn;
	return (pn);
}

