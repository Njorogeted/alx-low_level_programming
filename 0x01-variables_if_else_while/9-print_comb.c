#include <stdio.h>
/**
 * main - program to print letters from a to z
 * @a - var to hold the numbers 0 to 9
 * Return: return 0 when success
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar('\n');
		}
	}
	return (0);
}
