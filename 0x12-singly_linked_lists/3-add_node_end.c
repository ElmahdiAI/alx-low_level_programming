#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *newNode, *last;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}
	return (*head);
}
