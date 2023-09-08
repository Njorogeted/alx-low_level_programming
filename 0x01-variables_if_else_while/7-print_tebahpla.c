#include <stdio.h>
/**
 * main - program to print letters from z to a
 * @a - var to hold the letters
 * @c - array of alphabrts
 * Return: return 0 when success
 */
int main(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a--)
	{
		putchar(c[a]);
	}
	putchar('\n');
	return (0);
}
