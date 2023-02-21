/*
 * A program that prints _putchar, followed by a new line.
 *
 * The program should return 0
 */

#include <main.h>

/**
 * main - program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *sh = "ALX";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}

	_putchar('\n');

	return (0);
}
