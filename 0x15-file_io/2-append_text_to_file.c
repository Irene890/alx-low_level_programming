#include "main.h"

/**
 * append_text_to_file - this function appends text end file
 * @filename: name of file pointer
 * @text_content: The string to add to the end of the file
 * Return: filename is NULL display -1
 * return 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p;
	int k;

	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	p = open(filename, O_WRONLY | O_APPEND);

	k = write(p, text_content, len);

	if (p == -1 || k == -1)
		return (-1);

	close(p);

	return (1);
}
