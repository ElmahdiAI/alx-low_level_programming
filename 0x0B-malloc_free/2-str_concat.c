#include "main.h"

/**
 * str_concat- a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to a newly allocated space in memory contains
 * the contents of s1, followed by the contents of s2,
 * return NULL on failure
 */
 char *str_concat(char *s1, char *s2)
 {
 	int i = 0, len_s1 = 0, len_s2 = 0;
 	char *str;

 	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	str = malloc(sizeof(char) * (len_s1 + len_s2));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (i = 0; s2[i]; i++)
		str[len_s1 + i] = s2[i];
	return (str);
 }
