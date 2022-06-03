#include <stdio.h>
/**
 * main - main block
 * A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int lett = 0;

	while (lett < 10)
	{
		putchar(48 + lett);
		lett++;
	}

	putchar('\n');
	return (0);
}
