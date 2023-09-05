#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file- appends text at the end of a file.
 * @filename: the name of the file to create
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		file = write(file, text_content, strlen(text_content));
		if (file == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}