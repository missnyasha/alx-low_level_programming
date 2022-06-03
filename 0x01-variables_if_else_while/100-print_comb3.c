#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int lett;
	int p = 0;

	while (p < 10)
	{
		lett = 0;
		while (lett < 10)
		{
			if (p != lett && p < lett)
			{
				putchar('0' + p);
				putchar('0' + lett);

				if (lett + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			lett++;
		}
		p++;
	}
	putchar('\n');
	return (0);
}
