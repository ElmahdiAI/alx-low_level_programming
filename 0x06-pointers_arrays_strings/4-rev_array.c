#include "main.h"

/*******************************************************
 *********************MEHDI**AI*************************
 * reverse_array - reverse an array
 * @a: our array
 * @n: number of elements of the array
 *******************************************************
 *******************************************************/
void reverse_array(int *a, int n)
{
	int i, temp, m = n;

	for (i = 0; i < m/2; i++)
	{
		temp = a[i];
		a[i] = a[n-1];
		a[n-1] = temp;
		n--;
	}
}
