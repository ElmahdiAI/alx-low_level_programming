#include <stdio.h>
#include "lists.h"
/**
 * sum_listint- a function that returns the sum of all the dataof a
 * listint_t linked list.
 * @head: head of the list
 * Return: sum of all the data, 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
