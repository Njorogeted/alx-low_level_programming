#include "main.h"
/**
 * print_rev - prints output in revers
 * @s: prototipe for our function
 * Return: return void
 */
void print_rev(char *s)
{
	int x;
	int l = 1;

	while (s[l] != '\0')
	{
		l++;
	}
	for (x = l; x >= 1; x--)
	{
		_putchar (s[x]);
	}
	_putchar ('\n');
}
