#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 * @x - first loop to print ten time
 * Return: retun alphabets when success
 */
void print_alphabet_x10(void)
{
	char *bet = "abcdefghijklmnopqrstuvwxyz\n";
	int x;

	for (x = 1; x <= 10; x++)
	{
	while (*bet)
	{
		_putchar(*bet);
		bet++;
	}
	}
}

