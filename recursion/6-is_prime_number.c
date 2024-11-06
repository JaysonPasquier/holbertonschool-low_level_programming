#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
static int divisor = 2;
int is_prime;

if (n <= 1)
{
divisor = 2;
return (0);
}

if (divisor *divisor > n)
{
is_prime = 1;
divisor = 2;
return (is_prime);
}

if (n % divisor == 0)
{
is_prime = 0;
divisor = 2;
return (is_prime);
}

divisor++;
return (is_prime_number(n));
}
