#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen- calculate lenth of a string
 * @str: the string
 * Return: lenth of a string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * add_node- a function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;

	newList = malloc(sizeof(list_t));
	if (newList && str)
	{
		newList->str = strdup(str);
		newList->len = _strlen(newList->str);
		newList->next = *head;
	}
	else
	{
		free(newList);
		return (NULL);
	}
	(*head) = newList;
	return (*head);
}
