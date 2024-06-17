#include <stdio.h>

/**
 * main - opening of file
 * Description: print name of file that file is compiled from
 * Return: Always 0 (Success)
 */

int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}