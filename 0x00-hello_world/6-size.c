#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (means success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char: %lu byte(s)\n", (unassigned long)sizeof(a));
printf("size of b char: %lu byte(s)\n", (unassigned long)sizeof(b));
printf("size of c long int: %lu byte(s)\n", (unassigned long)sizeof(c));
printf("size of d long long int: %lu byte(s)\n", (unassigned long)sizeof(d));
printf("size of f float: %lu byte(s)\n", (unassigned long)sizeof(f));
return (0);
}
