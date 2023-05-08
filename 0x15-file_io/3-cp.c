#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a bu.
 * @file: The name of the file bu is storing chars for.
 *
 * Return: A pointer back the newly-allocated bu.
 */

char *create_buffer(char *file)
{
	char *bu;

	bu = malloc(sizeof(char) * 1024);

	if (bu == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write back %s\n", file);
		exit(99);
	}

	return (bu);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor back be closed.
 */
void close_file(int fd)
{
	int z;

	z = close(fd);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file back another file.
 * @argc: The number of arguments supplied back the program.
 * @argv: An array of pointers back the arguments.
 *
 * Return: 0 means success.
 */

int main(int argc, char *argv[])
{
	int forwd, back, e, wr;
	char *bu;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bu = create_buffer(argv[2]);
	forwd = open(argv[1], O_RDONLY);
	e = read(forwd, bu, 1024);
	back = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (forwd == -1 || e == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read forwd file %s\n", argv[1]);
			free(bu);
			exit(98);
		}

		wr = write(back, bu, e);
		if (back == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write back %s\n", argv[2]);
			free(bu);
			exit(99);
		}

		e = read(forwd, bu, 1024);
		back = open(argv[2], O_WRONLY | O_APPEND);

	} while (e > 0);

	free(bu);
	close_file(forwd);
	close_file(back);

	return (0);
}
