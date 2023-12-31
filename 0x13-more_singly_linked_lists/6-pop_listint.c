#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint- deletes the head node of a listint_t linked list.
 * @head: head of the list
 * Return: the head node’s data (n). if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!(*head))
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
