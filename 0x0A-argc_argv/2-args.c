#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints all arguments it receives
 * @argc: aaray size
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
