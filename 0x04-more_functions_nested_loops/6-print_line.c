#include "main.h"
/**
 * print_line - prints a horizontal line
 * @n: parameter for our functio
 * Return: return line
 */
void print_line(int n)
{
	int x = 1;

	if (n > 0)
	{
	while (x <= n)
	{
		_putchar ('_');
		x++;
	}
	_putchar ('\n');
	}
	else
		_putchar ('\n');
}
