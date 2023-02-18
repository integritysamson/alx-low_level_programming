#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This include of input
 * Return: Alawys 0
 *
 */
int main(void)
{
char low = 'a';
for (low = 'a'; low <= 'z'; low++)
if (low != 'q' && low != 'e')
{
putchar(low);
}
putchar('\n');
return (0);
}
