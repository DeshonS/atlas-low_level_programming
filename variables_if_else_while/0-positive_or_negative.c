#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'generates a random number then determines if the number is positive, negative, or nil'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	puts("%i is negative", n);
	else if (n > 0)
	puts("%i is positive", n);
	else
	puts("%i is zero", n);
	return (0);
}
