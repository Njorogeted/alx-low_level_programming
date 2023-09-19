#include "main.h"
/**
 * _strlen - function to return the length of a string
 * @s: the string pointer
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
