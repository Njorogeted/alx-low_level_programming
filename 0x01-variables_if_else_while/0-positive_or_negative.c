#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print random numbers and weather positive or neg
 * @n - number to be printed
 * Return: return 0 when complete
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
