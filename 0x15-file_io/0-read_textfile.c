#include "main.h"
/**
 * read_textfile - Function
 * @filename: string
 * @letters: number
 * Return: Number
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nr;
	char *T;
	int fd, i;

	if (filename == NULL)
		return (0);
	T = malloc(letters * sizeof(char));
	if(T == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(T);
		return (0);
	}
	nr = read(fd, T, letters);
	if (nr < 0)
	{
		free(T);
		return (0);
	}
	for(i = 0; i < letters; i++)
		_putchar(T[i]);

	close(fd);
	free(T);
	return nr;
}
