#include <stdio.h>
/**
 * main - program to print letters from a to z
 * @a - var to hold the numbers 0 to 9
 * @c - array of numbers
 * Return: return 0 when success
 */
int main(void)
{
	int c[10] = "0123456789";
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(c[a]);
	}
	putchar('\n');
	return (0);
}
