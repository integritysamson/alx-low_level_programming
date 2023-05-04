#include "main.h"
/**
 * binary_to_uint - this convert the binary number to 
 * an unsigned interger
 * @b: The binary number
 * return: To return unsigned interger 
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int base_two = 0;
if (!b)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
base_two = 2 * base_two + (b[a] - '0');
}
return (base_two);
}

