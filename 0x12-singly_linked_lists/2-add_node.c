#include "lists.h"
/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list
 *
 * @head: a pointer to a pointer to a node of type list_t
 * @str: the string to be added to the list
 * Return: returns the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *pn;

	pn = malloc(sizeof(list_t));
	if (pn == NULL)
		return (NULL);
	pn->str = strdup(str);
	pn->len = strlen(str);
	pn->next = *head;
	*head = pn;
	return (*head);
}
