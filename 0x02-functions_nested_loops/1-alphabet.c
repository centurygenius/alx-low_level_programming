#include "main.h"
/**
*print_alphabeth - Entry point to print alphabeth
*Description: This function prints lowercase alphabets
*Parameter: using only putchar
*Return: void(successful)
*/

void print_alphabeth(void)
{
char lCase;

lCase = 'a';
while (lCase <= 'z')
{
_putchar(lCase);
lCase = lCase + 1;
_putchar('\n');
}
return (0);
}
