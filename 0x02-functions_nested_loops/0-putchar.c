/*
 * A program that prints _putchar, followed by a new line.
 *
 * The program should return 0
 */

#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}

	_putchar('\n');

	return (0);
}
