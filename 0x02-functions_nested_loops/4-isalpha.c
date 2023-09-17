#include "main.h"
/**
 * _isalpha - checks for alphabet characters
 * @c: parameter to check if letter is uppercase
 * Return: return 1 when alphabet and 0 when not
 */
int _isalpha(int c)
{
	if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
