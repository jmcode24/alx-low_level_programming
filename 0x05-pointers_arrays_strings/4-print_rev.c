#include "main.h"

/**
 * print_rev - print in reverse.
 * @s: string.
 *
 * return: 0.
 */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while
	{
		longi++;
		s++;
	}

	s--;

	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
