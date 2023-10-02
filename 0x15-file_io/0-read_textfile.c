#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print, 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes_read = read(file, buffer, letters);
	if (bytes_read == -1)
	{
		close(file);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file);
	if (bytes_written == -1 || bytes_read != bytes_written)
	{
		return (0);
	}
	return (bytes_written);
}
