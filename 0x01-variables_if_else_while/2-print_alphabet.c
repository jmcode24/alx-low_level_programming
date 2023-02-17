/*
 * Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * only the putchar function is allowed
 * code should be in the main function
 * only use putchar twice in your code
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
