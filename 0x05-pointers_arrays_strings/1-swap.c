#include "main.h"
/**
 * swap_int - swap variable values
 * p - pointer 1
 * q - pointer 2
 * Return: void
*/

void swap_int(int *p, int *q)
{
*p += *q;
*q = *p - *q;
*p = *p - *q;
}
