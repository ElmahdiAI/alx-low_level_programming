#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index- a function that returns the nth node of a listint_t
 * linked list.
 * @head: head of the list
 * @index: index of the node, starting at 0
 * Return: the nth node, if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	while (index--)
	{
		if (temp->next)
			temp = temp->next;
		else
			return (NULL);
	}
	return (temp);
}
