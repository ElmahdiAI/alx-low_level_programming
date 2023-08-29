#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index- a function that inserts a new node at a
 * given position.
 * @head: head of the list
 * @idx: index of the list where the new node should be added.
 * @n: data to insert
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	if (!(*head))
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	temp = *head;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
		while (--idx)
		{
			if (!temp)
				return (NULL);
			temp = temp->next;
		}
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	return (*head);
}
