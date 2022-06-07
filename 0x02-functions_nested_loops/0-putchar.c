#include <unistd.h>

/**
 *A program that prints _putchar, followed by a new line
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
