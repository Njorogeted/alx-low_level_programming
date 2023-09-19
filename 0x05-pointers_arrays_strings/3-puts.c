#include "main.h"
/**
 * _puts - displays content to output screen
 * @str: parameter to be displayed
 * return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
