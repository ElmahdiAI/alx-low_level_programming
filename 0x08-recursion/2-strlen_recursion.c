#include "main.h"
/**
* _strlen_recursion- a function that returns the length of a string
* @s: targeted string
* Return: returns the length of a string
*/
int _strlen_recursion(char *s)
{
	int length = 0;

	while (s[++length])
		;
	return (length);
}
