#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - opening of file
 * @str: the string that the return is a duplicate of
 */

char *_strdup(char *str)
{
int x, i;
char *a;

if (str == NULL)
{
return (NULL);
}
for (x = 0; x != '\0'; x++)
{
;
}
a = malloc(x * sizeof(*a) + 1);

if (a == NULL)
{
return (NULL);
}
for (i = 0; i < x; i++)
{
a[i] = str[i];
}
return (a);
}
