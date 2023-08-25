#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end- a function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *end;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = newNode;
	return (*head);
}
