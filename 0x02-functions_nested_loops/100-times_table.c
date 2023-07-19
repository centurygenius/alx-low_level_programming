#include "main.h"
/**
 * print_times_table - prints times table of inputed value
 * commencing with 0
 * @n: value to be computed
 */
void print_times_table(int n)
{
int ix, jy, kz;

if (n >= 0 && n <= 15)
{
for (ix = 0; ix <= n; ix++)
{
for (jy = 0; jy <= n; jy++)
{
kz = jy * ix;
if (jy == 0)
{
_putchar(kz + '0');
}
else if (kz < 10 && jy != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(kz + '0');
}
else if (kz >= 10 && kz < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((kz / 10) + '0');
_putchar((kz % 10) + '0');
}
else if (kz >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((kz / 100) + '0');
_putchar(((kz / 10) % 10) + '0');
_putchar((kz % 10) + '0');
}
}
_putchar('\n');
}
}
}
