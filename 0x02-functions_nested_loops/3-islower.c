#include "main.h"
/**
 * _islower - identifies if letter is lowercase
 * @c: letter to imput the letters
 * Return: 1 if char is lower and 0 when upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
