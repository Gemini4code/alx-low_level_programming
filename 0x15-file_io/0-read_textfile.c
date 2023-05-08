#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0 means function failed or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *obj;
	ssize_t fs;
	ssize_t wr;
	ssize_t t;

	fs = open(filename, O_RDONLY);
	if (fs == -1)
		return (0);
	obj = malloc(sizeof(char) * letters);
	t = read(fs, obj, letters);
	wr = write(STDOUT_FILENO, obj, t);

	free(obj);
	close(fs);
	return (wr);
}
