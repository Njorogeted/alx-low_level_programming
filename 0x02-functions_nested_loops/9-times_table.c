#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the nines times table
 * Return: retun void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			printf("%2d,", x * y);
		}
		printf("\n");
	}
}
