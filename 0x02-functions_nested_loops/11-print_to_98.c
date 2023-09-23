#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: the number to start
 * Return: void
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
	for (x = n; x <= 98; x++)
	{
		if (x == n)
		{
			printf("%d", x);
		}
		else
		{
		printf(", %d", x);
		}
	}
	printf("\n");
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if  (x == n)
			{
				printf("%d", x);
			}
			else
			{
				printf(", %d", x);
			}
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("98\n");
	}
}
