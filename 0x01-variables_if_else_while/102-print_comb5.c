#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
int a,b,c;
int d = 0;

while (b < 10)
{
	c = 0;
	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (!(b == a && c == b))
				{
					putchar('0' + d);
					putchar('0' + c);
					putchar(' ');
					putchar('0' + b);
					putchar('0' + a);
					if (!(d + c == 18 && a + b == 17 && b == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
