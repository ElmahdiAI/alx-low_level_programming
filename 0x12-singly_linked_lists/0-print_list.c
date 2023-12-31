#include "lists.h"
#include <stdio.h>
/**
 * print_list- a function that prints all the elements of a list_t list.
 * @h: the list to print its element
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next;
	}
	return (n);
}
