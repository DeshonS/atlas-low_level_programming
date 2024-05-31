#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while(*ptr != '\0')
    {
        ptr++;
    }

    *ptr = ' ';
    ptr++;

    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}

int main()
{
    char dest[98] = "Hello";
    char src[] = "World!";

    _strcat(dest, src);

    printf("%s", dest);

    return 0;
}