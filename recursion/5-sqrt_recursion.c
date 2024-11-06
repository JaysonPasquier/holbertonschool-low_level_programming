#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
long i;

if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

i = _sqrt_recursion(n / 4) * 2;
if ((i + 1) * (i + 1) <= n)
return (i + 1);
return (i);
}
