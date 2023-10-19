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
 * create_file - creat file or trunc
 * @filename: Name of the file
 * @text_content: texe to add
 * Return: 1 success -1 failure
*/
int create_file(const char *filename, char *text_content)
{
    int fd, nby, len;

    if (!filename)
        return (-1);
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);
    if (text_content)
    {
        len = _strlen(text_content);
        nby = write(fd, text_content, len);
        if (nby == -1)
            return (-1);
    }
    close(fd);
    return (1);
}
