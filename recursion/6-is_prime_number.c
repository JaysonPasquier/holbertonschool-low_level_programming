#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
static int i = 2;
if (n <= 1)
{
i = 2;
return (0);
}
if (i * i > n)
{
i = 2;
return (1);
}
if (n % i == 0)
{
i = 2;
return (0);
}
i++;
return (is_prime_number(n));
}
