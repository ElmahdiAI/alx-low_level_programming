#include "lists.h"
#include <stdio.h>
/**
 * print_list- a function that prints all the elements of a list_t list.
 * @h: the list to print its element
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	size_t n = 0;

	while (head != NULL)
	{
		if (head->str != NULL)
			printf("[%d] %s\n", head->len, head->str);
		else
			printf("[0] (nil)\n");
		n++;
		head = head->next;
	}

	return (n);
}
