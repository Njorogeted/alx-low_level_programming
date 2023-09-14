#include "main.h"
/**
 * print_square - prints squares
 * @size: parameter to input digit
 * Return: squares
 */
void print_square(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (x = 1; x <= size; x++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
