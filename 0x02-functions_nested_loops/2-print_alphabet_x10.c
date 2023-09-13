#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lower case x 10
 * @x - first loop to print ten time
 * @new - pointer to the first pointer
 * Return: retun alphabets when success
 */
void print_alphabet_x10(void)
{
	char *bet = "abcdefghijklmnopqrstuvwxyz\n";
	int x;

	for (x = 1; x <= 10; x++)
	{
	char *new = bet;

	while (*new)
	{
		_putchar(*new);
		new++;
	}
}
}

