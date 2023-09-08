#include <stdio.h>
/**
 * main - program to print letters from a to z
 * @a - var to hold the numbers 0 to 9
 * Return: return 0 when success
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
	for (b = a; b <= 9; b++)
	{
		c = a + b;
		if (a != b)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (c != 17)
			{
			putchar(',');
			putchar(' ');
			}
		}
		{
		}
	}
	}
	putchar ('\n');
	return (0);
}
