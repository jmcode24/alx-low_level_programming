/*
 * Write a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Numbers must be separated by ,/ , followed by a space
 * Numbers should be printed in ascending order
 * only the putchar function is allowed
 * code should be in the main function
 * only use putchar 4 times in your code
 * ot allowed to use any variable of type char
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
