#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a taxrt according to number
 * Return: Alawys 0
 *
 */
int main(void)
{
int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (lastd > 5)
i{
printf("last digit of %d is %d and is freater than 5\n", n, lastd);
}
else if (lastd == 0)
{
printf("lastd digit of %d is %d and is0\n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("last digit of %d is %d and i8s less than 6 and not 0\n", n, lastd);
}
return (0);
}
