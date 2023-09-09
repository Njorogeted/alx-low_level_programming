#include <stdio.h>
/**
 * main - program to print letters from a to z
 * @a - var to hold the numbers 0 to 9
 * Return: return 0 when success
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int k;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	for (c = 0; c <= 9; c++)
	{
	for (d = ((1 + c) * b); d <= 9; d++)
	{
		k = a + b + c + d;
		if (a != 0 || b != 0 || c != 0
				|| d != 0)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');
			if (k != 35)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
