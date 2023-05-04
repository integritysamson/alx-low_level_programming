#include "main.h"

/**
 * print_binary - program to print out the binary representation of a particular number.
 *
 * @n: This represent the binary
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

