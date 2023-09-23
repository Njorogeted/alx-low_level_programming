#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the nines times table
 * @n: the number to print n times table
 * Return: retun void
 */
void print_times_table(int n)
{
	int x, y;

	if (n <= 0 || n > 15)
	{
		return;
	}
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y < n; y++)
		{
			if (y == 0)
			{
				printf("%d", x * y);
			}
			else
			{
			printf(", %2d", x * y);
			}
		}
		printf("\n");
	}
}
