#include <stdio.h>
#include<unistd.h>
/**
 * main - program that taces characters and outputs
 * them in the standard error message
 * ujumbe - message being delivered
 * Return: return 1 when success
 */
int main(void)
{
	char *ujumbe = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, ujumbe, 59);
	return (1);
}
