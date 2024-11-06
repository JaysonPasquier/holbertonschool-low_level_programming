#include <stdio.h>

/**
 * main - main function
 * @argc: int argc
 * @argv: char argv
 *
 * Description: print the number of argument given when compiling
 * Return: return 0
 */

int main(int argc, char *argv[])
{
    (void)argv;
    printf("%d\n", argc - 1);

    return 0;
}