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
if (n <= 1)
{
divisor = 2;
return (0);
}
if (n == 2)
{
divisor = 2;
return (1);
}
if (divisor * divisor > n)
{
divisor = 2;
return (1);
}
if (n % divisor == 0)
{
divisor = 2;
return (0);
}
divisor++;
return (is_prime_number(n));
}
