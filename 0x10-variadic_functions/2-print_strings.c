#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings- a function that prints strings, followed by a new line.
 * @separator:  the string to be printed between the strings
 * @n: the number of integers passed to the function
 * Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *store;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		store = va_arg(args, char*);
		if (store != NULL)
			printf("%s", store);
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
