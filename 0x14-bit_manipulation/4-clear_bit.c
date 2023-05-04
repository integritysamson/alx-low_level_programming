#include "main.h"

/**
 * clear_bit - program file that sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned long interger.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return (1);
}
