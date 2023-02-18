/*
 * Write a program that prints all possible different
 * combinations of three digits.
 *
 * Numbers must be separated by ,, followed by a space
 * 012, 120, 102, 021, 201, 210 are considered the
 * same combination of the three digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order,
 * with three digits
 * only the putchar function is allowed
 * only use putchar 6 times in your code
 * not allowed to use any variable of type char
 * code should be in the main function
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
