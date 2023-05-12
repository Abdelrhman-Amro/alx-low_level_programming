#include "main.h"

/**
 * read_textfile - function
 * @filename: string
 * @letters: size
 * Return: number
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t N;
	int fd;
	char *T;

	if (!filename)
		return (0);
	T = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(T);
		return (0);
	}
	N = read(fd, T, letters);
	if (N < 0)
	{
		free(T);
		return (0);
	}
	N = write(STDOUT_FILENO, T, letters);
	if (N < 0 || N < letters)
	{
		free(T);
		return (0);
	}
	free(T);
	close(fd);
	return (N);
}
