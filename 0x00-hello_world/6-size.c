# include <stdio.h>
/**
*main - Entry point
*Description: This prints sizes of types using printf function and return void
*Parameters: sizes of char, int,long int, long long int anf float
*Return:0(successful) to the main function
*/
int main(void)
{
	char b = 'b';
	int i = 20;
	long int x = 2000005;
	long long int y = 200000000000005;
	float z = 21.5;

printf("Size of a char: %u byte(s)\n", sizeof(b));
printf("Size of an int: %u byte(s)\n", sizeof(i));
printf("Size of a long int: %u byte(s)\n", sizeof(x);
printf("Size of a long long int: %u byte(s)\n", sizeof(y));
printf("Size of a float: %u byte(s)\n", sizeof(z));
return (0);
}
