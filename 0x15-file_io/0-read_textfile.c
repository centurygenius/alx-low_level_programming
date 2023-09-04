#include "main.h"

/**
 * read_textfile- Entry point
 * Description: Reads text file and print to STDOUT.
 * @filename: file to read from
 * @letters: number of letters it should read and print
 * Return: wr- number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fildes;
	ssize_t wr;
	ssize_t rd;

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fildes, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fildes);
	return (wr);
}
