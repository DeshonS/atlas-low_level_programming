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
for (; *haystack != '\0'; haystack++)
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
needle++;
if (*haystack != *needle)
{
break;
}
}
}