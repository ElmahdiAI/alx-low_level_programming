#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;
    char *a = "hello";
    char *b = "world!";
    
    printf("%d ", _strcmp(a, b));
}
int _strcmp(char *s1, char *s2)
{
	int i = 0, sum = 0;

	while (*s1 || *s2)
	{
		sum += (s1[i] + '0') - (s2[i] + '0');
		i++;
	}
	return sum;
}