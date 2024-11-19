#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - main function
 * @n: unsigned int n
 *
 * Description: function that returns the sum of all its parameters
 * Return: return à if n == 0 else return the sum of the paramteres.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
