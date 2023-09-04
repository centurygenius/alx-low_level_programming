#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char *_createbuff(char *file);
void _closeFile(int fildes);

/**
 * _createbuff - Entry point
 * Description: Allocates 1024 bytes buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char *_createbuff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * _closeFile - Entry point
 * Description: Closes file descriptors.
 * @fildes: The file descriptor to be closed.
 */

void _closeFile(int fildes)
{
	int cl;

	cl = close(fildes);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors %d\n", fildes);
		exit(100);
	}
}

/**
 * main - Entry point
 * Description: Copies the contents of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Exit: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n");
		exit(97);
	}

	buff = _createbuff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read the file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	_closeFile(from);
	_closeFile(to);

	return (0);
}
