#include <stdio.h>

/**
 * _strstr - opening of file
 * @haystack: string to be searched for needle
 * @needle: substring to be searched for in haystack
 * Return: Pointer to needle in haystack
*/
char *_strstr(char *haystack, char *needle)
{
char *x;

while (*haystack)
{
for (x = needle; *x; x++)
{
if (*haystack == *x)
{
return (haystack);
}
}
haystack++;
}
return (NULL);
}