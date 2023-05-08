#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 means success, -1 means failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, wr, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	wr = wrrite(a, text_content, x);

	if (a == -1 || wr == -1)
		return (-1);

	close(a);

	return (1);
}
