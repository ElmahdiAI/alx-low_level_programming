#include <stdio.h>
#include "lists.h"
/**
 * print_listint- a function that prints all the elements of a listint_t list.
 * @h: provided list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
