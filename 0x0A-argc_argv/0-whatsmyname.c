#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints the name of the program
 * @argc: array size or number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
