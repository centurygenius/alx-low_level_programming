#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to commence printing from
 * Return: 0(successful)
 */

void print_to_98(int n)
{
int ix, jy;
if (n <= 98)
{
for (ix = n; ix <= 98; ix++)
{
if (ix != 98)
printf("%d, ", ix);
else if (ix == 98)
printf("%d\n", ix);
}
}
else if (n >= 98)
{
for (jy = n; jy >= 98; jy--)
{
if (jy != 98)
printf("%d, ", jy);
else if (jy == 98)
printf("%d\n", jy);
}
}
}

