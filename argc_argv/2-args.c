#include <stdio.h>

/**
 * main - main function
 * @argc: int argc
 * @argv: char argv
 *
 * Description: print all argument used, with a new line each time
 * Return: return 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; ++i)
{
printf("%s\n", argv[i]);
}

return (0);
}
