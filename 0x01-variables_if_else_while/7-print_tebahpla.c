#include <stdio.h>
/**
 * main - program to print letters from z to a
 * @c - array of alphabrts
 * Return: return 0 when success
 */
int main(void)
{
	char c;

	for (c = 'z'; c < 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
