#include <stdio.h>
/**
 * main - prints fibonacci numbers
 * Return: return 0 when success
 */
int main(void)
{
	int x = 1, y = 1;
	int f, t;

	printf("%d, %d", x, y);
	for (f = 3; f <= 50; f++)
	{
		t = x + y;
		x = y;
		y = t;
		printf(", ");
		printf("%d", t);
	}
	printf("\n");
	return (0);
}
