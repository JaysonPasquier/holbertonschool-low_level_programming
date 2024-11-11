#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main function
 * @s1: char s1
 * @s2: char s2
 *
 * Description: concatenates two strings
 * Return: NULL or new_str
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;
char *str;
int index = 0;
int i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

str = malloc((len1 + len2 + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
str[index] = s1[i];
index++;
}

for (i = 0; i < len2; i++)
{
str[index] = s2[i];
index++;
}

str[index] = '\0';

return (str);
}
