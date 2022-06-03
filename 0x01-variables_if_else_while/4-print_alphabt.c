#include <stdio.h>
/**
 * main - main block
 * A program that prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		if (let != 'e' && let != 'q')
		{
			putchar(let);
		}
		let++;
	}

	putchar('\n');
	return (0);
}
