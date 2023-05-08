#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to wrrite to the file.
 *
 * Return: 1 0n success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fs, wr, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	fs = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fs, text_content, x);

	if (fs == -1 || wr == -1)
		return (-1);

	close(fs);

	return (1);
}
