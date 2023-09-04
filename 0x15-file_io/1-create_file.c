#include "main.h"

/**
 * create_file - Entry point
 * Description: Creates a file with permissions
 * @filename: A pointer to the file to be created
 * @text_content: A pointer to a string to write to the file.
 * Return: -1 if the function fails or
 *         1 Otherwis
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, wr, lenght;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		lenght = 0;
		while (text_content[lenght])
			lenght++;
	}

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fildes, text_content, lenght);

	if (wr == -1)
		return (-1);
	if (fildes == -1)
		return (-1);

	close(fildes);

	return (1);
}
