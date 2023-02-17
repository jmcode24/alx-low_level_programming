/*
 * Write a program that prints all possible different
 * combinations of two digits.
 *
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the
 * two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order,
 * with two digits
 * only the putchar function is allowed
 * only use putchar 5 times in your code
 * not allowed to use any variable of type char
 * code should be in the main function
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
