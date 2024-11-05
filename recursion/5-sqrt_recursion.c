#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
static int i = 1;

if (n < 0)
return (-1);

if (i * i > n)
{
i = 1;
return (-1);
}

if (i *i == n)
{
int result = i;
i = 1;
return (result);
}

i++;
return (_sqrt_recursion(n));
}
