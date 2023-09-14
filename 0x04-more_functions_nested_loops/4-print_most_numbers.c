#include "main.h"
/**
 * print_most_numbers - prints some numbers
 * Return: return numbers
 */
void print_most_numbers(void)
{
	char *x = "01356789";
	char *y = &x[0];

	while (*y != '\0')
	{
		_putchar (*y);
		y++;
	}
	_putchar ('\n');
}
