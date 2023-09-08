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
	int k;

	for (a = '0'; a <= '9'; a++)
	{
	for (b = a; b <= '9'; b++)
	{
	for (c = b; c <= '9'; c++)
	{
		if (a != b && a != c && b != c)
		{
			k = a + b + c;
			putchar(a);
			putchar(b);
			putchar(c);
			if (k != 24)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	}
	putchar('\n');
	return (0);
}
