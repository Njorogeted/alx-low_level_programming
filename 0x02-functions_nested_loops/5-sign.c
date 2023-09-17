#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: parameter to put the number
 * Return: return 1 if positive, 0 if zero, -1 when negaative
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
