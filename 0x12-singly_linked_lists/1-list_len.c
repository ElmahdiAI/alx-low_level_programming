#include "lists.h"
#include <stdio.h>
/**
* list_len- a function that returns the number of elements
* in a linked list_t list.
* @h: the list to print its element
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
