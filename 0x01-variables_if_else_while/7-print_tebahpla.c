#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * A program that prints the lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
 
int main(void)
{
	char lett = 'z';

	while (lett >= 'a')
	{
		putchar(lett);
		lett--;
	}

	putchar('\n');
	return (0);
}
