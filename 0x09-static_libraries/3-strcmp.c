#include "main.h"

/*******************************************************
 *********************MEHDI**AI*************************
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return:
 * 		returns zero if s1 == s2
 * 		returns negative number if s1 < s2
 * 		returns positive number if s1 > s2
 *******************************************************
 *******************************************************
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (*s1 || *s2)
	{
		if (s1[i] == '\0')
		{
			diff += s2[i];
		}
		else if (s2[i] == '\0')
		{
			diff += s1[i];
		}
		else
		{
			diff += s1[i] - s2[i];
		}
		i++;
	}
	return (diff);
}
