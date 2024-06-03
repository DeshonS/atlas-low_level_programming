#include <stdio.h>

/**
 * _strstr - opening of file
 * @haystack: string to be searched for needle
 * @needle: substring to be searched for in haystack
 * Return: Pointer to needle in haystack
*/
char *_strstr(char *haystack, char *needle)
{

if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
while (*needle && *haystack == *needle)
{
needle++;
}
if (*needle == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
