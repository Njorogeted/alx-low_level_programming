#include "main.h"
/**
 * main - program to print _putchar
 * Return: return 0 when success
 */
int main(void)
{
	char *jina = "_putchar\n";

	while (*jina)
	{
	_putchar(*jina);
	jina++;
	}
	return (0);
}
