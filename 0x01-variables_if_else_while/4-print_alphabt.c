#include <stdio.h>
/**
 * main - program to print letters from a to z
 * @a - var to hold the letters
 * @c - array of alphabrts
 * Return: return 0 when success
 */
int main(void)
{
	char c[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(c[a]);
	}
	putchar('\n');
	return (0);
}
