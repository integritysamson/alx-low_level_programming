#include "main.h"
/**
 * binary_to_uint - This convert the binary number to an unsigned interger
 * @b: The binary number
 * return: to return unsigned interger 
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int a;
	int lenght, base_2;
	if (!b)
		return (0);
	a = 0;
	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;
	for(lenght--, base_2 = 1; lenght >= 0; lenght--, base_2 *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}
		if (b[lenght] & 1)
		{
			a += base_2;
		}
	}
	return (a);
}

