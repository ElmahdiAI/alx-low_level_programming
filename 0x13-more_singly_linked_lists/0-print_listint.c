#include <stdio.h>
#include "lists.h"
/**
 * print_listint- a function that prints all the elements of a listint_t list.
 * @h: provided list
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
