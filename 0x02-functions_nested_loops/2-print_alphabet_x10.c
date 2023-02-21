/*
 * A function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Prototype: void print_alphabet_x10(void);
 * Only use _putchar twice in your code.
 */

#include <stdio.h>

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		co++;

		_putchar('\n');
	}
}
