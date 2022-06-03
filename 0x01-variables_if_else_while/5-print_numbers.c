#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char lett = '0';

	while (lett <= '9')
	{
		putchar(lett);
		lett++;
	}

	putchar('\n');
	return (0);
}
