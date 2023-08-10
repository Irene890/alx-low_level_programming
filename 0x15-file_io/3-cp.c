#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int d);

/**
 * create_buffer - gives 1024 bytes
 * @file: name for storing charr
 * Return: buffer new
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function that closes file
 * @d: file closed
 */
void close_file(int d)
{
	int m;

	m = close(d);
	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - function copies values from a file to a file
 * @argc: arguments given
 * @argv: array to arg
 * Return: if successful 0
 * Description: code 97 is arg is incorrect
 */
int main(int argc, char *argv[])
{
	int from;
	int to;
	int p, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	p = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, p);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		p = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (p > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
