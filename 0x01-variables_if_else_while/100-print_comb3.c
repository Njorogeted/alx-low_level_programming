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

	for (a = '0'; a <= '9'; a++)
	{
	for (b = '0'; b <= '9'; b++)
	{
		if (a != b)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}	
	}
	}
	putchar('\n');
	return (0);
}
