#include <stdio.h>

/**
 * _strcmp - opening of file
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
{
;
}
return (s1[i] - s2[i]);
}
