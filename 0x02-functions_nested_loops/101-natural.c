#include <stdio.h>
/**
* main - Lists all the natural numbers below 1024 (excluded)
* that are multiples of 3 or 5.
*
* Return: 0 always.
*/
int main(void)
{
int ix, sum = 0;
for (ix = 0; ix < 1024; ix++)
{
if ((ix % 3) == 0 || (ix % 5) == 0)
sum += ix;
}
printf("%d\n", sum);
return (0);
}
