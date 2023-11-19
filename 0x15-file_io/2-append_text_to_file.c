#include "main.h"

/**
 * _strlen - calculate length of a string
 * @s: conatain string address
 * Return: size of string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: texe to add
 * Return: 1 success -1 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nby;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		nby = write(fd, text_content, _strlen(text_content));
		if (nby == -1)
			return (-1);
	}
	close (fd);
	return (1);
}
