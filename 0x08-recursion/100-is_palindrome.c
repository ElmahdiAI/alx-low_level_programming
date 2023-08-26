#include "main.h"
#include <string.h>
/**
 * is_pal- a fanction recursive that check if a string is palindrome
 * @s: string to check
 * @start: iterator from the start of string
 * @end: iterator from the end of string
 * Return: 1 if @s is palindrome, 0 otherwise
 */
int is_pal(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (s[start] != s[end])
		return (0);
	if (start < end)
		return (is_pal(s, ++start, --end));
	return (1);
}
/**
 * is_palindrome- check if a string is palindrome
 * @s: the string to check
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int lenght;

	lenght = strlen(s);
	if (lenght == 0)
		return (1);
	return (is_pal(s, 0, lenght - 1));
}
