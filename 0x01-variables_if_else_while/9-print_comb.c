#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int lett = 0;

	while (lett < 10)
	{
		putchar(48 + c);
		if (lett != 9)
		{
			putchar(',');
			putchar(' ');
		}
		lett++;
	}
	putchar('\n');
	return (0);
}
