#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	char lett = 'a';

	while (lett <= 'f')
	{
		putchar(lett);
		lett++;
	}

	putchar('\n');
	return (0);
}
