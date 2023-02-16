#include <stdio.h>
#include <unistd.hd>
/**
 * main - c progam that prints a line into the standard error
 * Return 1 (correct)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
