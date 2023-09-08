#include <stdio.h>
/**
 * main - prints all base 16 numbers
 * @a - rray to put ournumbers
 * Return: return 0 when success
 */
int main(void)
{
	int c;
	char a[16] = "0123456789abcdef";

	for (c = 0; c < 16; c++)
	{
		putchar(a[c]);
	}
	putchar('\n');
	return (0);
}
