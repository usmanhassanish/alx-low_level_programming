#include "main.h"
/**
 * is_prime_number - find prime number
 * @n: the number to check
 * @i: iterator
 * Return: returns prime number
 */
int real_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - check if number is prime
 * @n: number
 * @i: iterator
 * Return: returns 0 or 1
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
