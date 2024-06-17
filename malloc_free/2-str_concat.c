#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - opening of file
 * @s1: first string
 * @s2: second string
 * Return: two concatenated strings, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
int x, y, z; //x for s1, y for s2
char *a;
int b = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (x = 0; s1[x] != '\0'; x++)
{
;
}
for (y = 0; s2[y] != '\0'; y++)
{
;
}
a = malloc((x + y + 1) * sizeof(char));
if (a == NULL)
{
return (NULL);
}
for (z = 0; z < (x + y + 1); z++)
{
if (z < x)
{
a[z] = s1[z];
}
else
{
a[z] = s2[b++];
}
}
return (a);
}
