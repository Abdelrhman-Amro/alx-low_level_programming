#include "main.h"

/**
 * read_textfile - Read the content of file
 * @filename: name of the file
 * @letters: number of chars to read
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	n = write(STDOUT_FILENO, buf, letters);
	if (n == -1)
		return (0);
	free(buf);
	return (n);
}
