#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    int i = 0;
    char *p = dest;

    while(*p != '\0')
    {
        i++;
    }

    while (*src = '\0')
    {
        *p = *src;
        p++;
        src++;
    }

    *ptr = '\0';

    return dest;
}