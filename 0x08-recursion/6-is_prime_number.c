#include "main.h"
/**
* is_prime_number- check if an integer is a prime number
* @n: the number
* Return: 1 if @n is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
	/**
	* is_prime: check if an integer is a prime number
	* @n: the number
	* @i: the number
	* Return: 1 if @n is a prime number, 0 otherwise
	*/
	int is_prime(int n, int i = 2)
	{
		if (n <= 2)
			return ((n == 2) ? 1 : 0);
		if (n % i == 0)
			return (0);
		if (i * i > n)
			return (1);
		return (is_prime(n, i++));
	}
}
