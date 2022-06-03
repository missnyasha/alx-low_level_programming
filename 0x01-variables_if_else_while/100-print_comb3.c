#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar('0' + x % 10);
			putchar('0' + y % 10);

			if (x == 8 && y == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
