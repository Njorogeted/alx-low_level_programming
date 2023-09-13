#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 * Return: retun alphabets when success
 */
void print_alphabet(void)
{
	char *bet = "abcdefghijklmnopqrstuvwxyz\n";

	while (*bet)
	{
		_putchar(*bet);
		bet++;
	}
}

