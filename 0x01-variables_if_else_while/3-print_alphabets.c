#include <stdio.h>
/**
 * main - Entry Point
 * A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
