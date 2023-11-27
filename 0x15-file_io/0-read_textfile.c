#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reads file,prints to POSIX stdout
 * @filename: file being read
 * @letters: total no letters read
 * where letters is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *rul;
	ssize_t fl, k, w;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	rul = malloc(sizeof(char) * letters);

	k = read(fl, rul, letters);
	w = write(STDOUT_FILENO, rul, k);
	free(rul);
	close(fl);
	return (w);
}
