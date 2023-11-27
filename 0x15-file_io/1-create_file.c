#include "main.h"

/**
 * create_file - Function to create file
 * @filename: the file to be created pointer
 * @text_content: string to be written in file pointer
 * Return: if file name is NULL display -1
 * if textcontent is NULL create empty file
 */
int create_file(const char *filename, char *text_content)
{
	int n;
	int g;
	int len;

	len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(n, text_content, len);

	if (n == -1 || g == -1)
		return (-1);

	close(n);

	return (1);
}

