#include "main.h"
/**
*print_alphabet_x10 - Entry point
*Description: prints lowercase alphabeth x 10
*
*Return: void(successful)
*/
void print_alphabet_x10(void)
{
char lCase;
int x;

x = 0;
while (x < 10)
{
lCase = 'a';
while (lCase <= 'z')
{
_putchar(lCase);
lCase++;
}
_putchar('\n');
x++;
}
}
