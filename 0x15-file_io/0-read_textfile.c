#include "main.h"

/**
 * read_textfile - Read the content of file
 * @filename: name of the file
 * @letters: number of chars to read
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, nby;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = oper(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	n = read(fd, buf, letters);
	if (n == -1)
		return (0);
	n = write(fd, buf, letters);
	if (n == -1)
		return (0);
	return (n);
}
