#include "lists.h"

/**
 * add_node_end - function that adds a new node to the end of a linked list
 *@head: a pointer to a pointer to the head of the list
 *@str: a pointer to a string
 * Return: returns a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	new = 0;

	list_t *first;
	list_t *last;
	last = *head;
	new = malloc(sizeof(list_t));
	if (first == NULL)
	{
		free(first);
		first = NULL;
		return (NULL);
	}
	first->str = strdup(str);
	first->len = strlen(str);
	fist->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
