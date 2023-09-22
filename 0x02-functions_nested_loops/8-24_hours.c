#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute in a day
 * Return: return void
 */
void jack_bauer(void)
{
	int x, y;

	for(x = 0; x <= 24; x++)
	{
		for(y = 0; y < 60; y++)
		{
			printf("%02d:%02d\n",x,y);
		}
	}
}
