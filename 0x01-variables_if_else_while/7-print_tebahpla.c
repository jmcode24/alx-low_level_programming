/*
 * Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 *
 * only the putchar function is allowed
 * code should be in the main function
 * only use putchar twice in your code
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
