#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - Copy the content of one file to another.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line argument strings.
 * Return: 0 on success, or an error code.
 */
int main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t bytes_rd, bytes_wr;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		reading_error(av[1]);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		writing_error(av[2]);
	}
	bytes_rd = read(file_from, buffer, 1024);
	if (bytes_rd == -1)
	{
		closing_error(file_from);
		closing_error(file_to);
		reading_error(av[1]);
	}
	bytes_wr = write(file_to, buffer, bytes_rd);
	if (bytes_wr == -1)
	{
		close(file_from);
		close(file_to);
		writing_error(av[2]);
	}
	if (close(file_from) == -1)
		closing_error(file_from);
	if (close(file_to) == -1)
		closing_error(file_to);
	return (0);
}
/**
 * closing_error- process to close the file
 * @file: file to close
 * Return: Nothing
 */
void closing_error(int file)
{
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}
/**
 * reading_error- reading error handle
 * @file: file to read
 * Return: Nothing
 */
void reading_error(const char *file)
{
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * writing_error- writnig error handle
 * @file: file to write in
 * Return: Nothing
 */
void writing_error(const char *file)
{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
