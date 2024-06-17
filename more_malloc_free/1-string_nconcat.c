#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - opening of file
 * @s1: first string to be merged
 * @s2: second string to be merged
 * @n: number of bytes of s2 to use
 * Return: pointer to new merged string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, x;
char *a;
unsigned int j, y;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
;
}
for (j = 0; s2[j] != '\0' && j < n; j++)
{
;
}
a = malloc((i + j + 1) * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
{
a[x] = s1[x];
}
for (y = 0; y < n && s2[y] != '\0'; y++)
{
a[x] = s2[y];
x++;
}
a[x] = '\0';
return (a);
}
