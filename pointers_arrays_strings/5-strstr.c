#include <stdio.h>

/**
 * _strstr - opening of file
 * @haystack: string to be searched for needle
 * @needle: substring to be searched for in haystack
 * Return: Pointer to needle in haystack
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n && *h == *n)
{
h++;
n++;
}
if (*needle == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
