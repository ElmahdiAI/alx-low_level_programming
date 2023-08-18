#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all-  a function that prints anything.
 * @format:  a list of types of arguments passed to the function
 * it is a constant pointer that points to a constant string.
 * The string pointed to by format cannot be modified, and the pointer
 * format itself cannot be changed to point to a different memory location.
 * Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *store;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			store = va_arg(args, char*);
			if (store == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", store);
		break;
		}
		while (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
