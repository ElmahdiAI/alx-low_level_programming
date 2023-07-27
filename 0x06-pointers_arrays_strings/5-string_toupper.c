#include "main.h"

/*******************************************************
 *********************MEHDI**AI*************************
 * string_toupper - turn lower case into upper
 * @src: string source
 *******************************************************
 *******************************************************/
char *string_toupper(char *src)
{
	int i = 0;
	while (*src)
	{
		if(src[i] > 'a' && src[i] < 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	return *src;
}
