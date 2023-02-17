/*
 * Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * not allowed to use any variable of type char
 * only the putchar function is allowed
 * only use putchar twice in your code
 * code should be in the main function
 */

#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * only using putchar and without char variables.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
