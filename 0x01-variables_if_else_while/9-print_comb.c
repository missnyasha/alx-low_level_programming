#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x % 10);
		if (x == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
