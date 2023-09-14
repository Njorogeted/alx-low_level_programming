#include "main.h"
/**
 * more_numbers - preint ten times to 14
 * Return: numbers
 */
void more_numbers(void)
{
	int x;
	char *y = "01234567891011121314";

	for (x = 1; x <= 10; x++)
	{
		char *z = &y[0];

		while (*z != '\0')
		{
			_putchar (*z);
			z++;
		}
		_putchar ('\n');
	}
}

