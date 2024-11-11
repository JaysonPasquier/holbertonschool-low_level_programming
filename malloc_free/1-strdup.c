#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main function
 * @str: char str
 *
 * Description: returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * Return: return NULL or else in case
 */
char *_strdup(char *str)
{
char *dup_str;
int i = 0;
int j = 0;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

dup_str = malloc((i + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);

for (j = 0; j <= i; j++)
{
dup_str[j] = str[j];
}

return (dup_str);
}
