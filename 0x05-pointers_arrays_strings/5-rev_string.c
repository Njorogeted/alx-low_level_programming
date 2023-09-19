#include "main.h"
/**
 * rev_string - reveses a string
 * @s:prototype for revers
 * Return: returns void
 */
void rev_string(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x - 1; y >= 1; y--)
	{
		*s = s[y];
	}
}
