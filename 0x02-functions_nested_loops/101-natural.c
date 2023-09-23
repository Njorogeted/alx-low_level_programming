#include <stdio.h>
/**
 * main - a program that adds the multiples of 3 and 5
 * Return: void
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
