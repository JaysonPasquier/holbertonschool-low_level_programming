#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: int argc
 * @argv: char argv
 *
 * Description: print the product of two arguments
 * Return: return 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
int result;

if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
