#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x: parameter tfor number
 * Return: return last digit
 */
int print_last_digit(int x)
{
	x = (x % 10);

	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (0);
}
