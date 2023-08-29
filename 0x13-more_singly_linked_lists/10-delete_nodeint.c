#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- deletes the node at index index of a
 * listint_t linked list.
 * @head: head of the list
 * @index:  index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iterator = *head, *temp;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(iterator);
		return (1);
	}
	while (--index)
	{
		if (!iterator)
			return (-1);
		iterator = iterator->next;
	}
	temp = iterator->next;
	iterator->next = temp->next;
	free(temp);
	return (1);
}
