#include "main.h"
/**
 * _strlen - function to return the length of a string
 * @s: the string pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int x;

	for (x = 1; x < s['\0']; s++)
	{
		x += 1;
	}
	return (x - 1);
}
