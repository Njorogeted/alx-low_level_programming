#include "main.h"
/**
 * swap_int - function to swap the values of variables
 * @a: first variavle
 * @b: second variable
 * Return: returns void when program is executed
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
