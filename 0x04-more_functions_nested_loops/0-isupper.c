#include "main.h"
/**
 * _isupper - identifies if a letter is upper case
 * @c: parameter to input the letter
 * Return: return 1 when uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
