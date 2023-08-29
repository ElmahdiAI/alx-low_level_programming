#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end- a function that adds a new node at
 * the end of a listint_t list
 * @head: head of the list
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *iterator;

	iterator = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (iterator)
	{
		while (iterator->next)
		{
			iterator = iterator->next;
		}
		iterator->next = new_node;
	}
	else
		*head = new_node;
	return (*head);
}
