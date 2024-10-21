#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

if (n > 5)
{
printf("last digit of %d is %d and is greater than 5"), n, last_digit);
}
else if (n == 0)
{
printf("last digit of %d is %d and is 0", n, last_digit);
}
else
{
printf("last digit od %d is %d and is less than 6 and not 0", n, last_digit);
}

return (0);
}
