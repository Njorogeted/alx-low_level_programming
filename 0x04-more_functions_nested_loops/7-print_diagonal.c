#include "main.h"
/**
 * print_diagonal - prints a horizontal line
 * @n: parameter for input
 * Return: return line
 */
void print_diagonal(int n)
{
	int x;
	int y;
	int z;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
		for (y = 1; y <= x; y++)
		{
		_putchar (' ');
		}
		for (z = x; z < x + 1; z++)
		{
		_putchar ('\\');
		}
	_putchar ('\n');
	}
	}
	else
		_putchar ('\n');
}
