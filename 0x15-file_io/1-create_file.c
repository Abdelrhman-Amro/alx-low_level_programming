#include "main.h"

/**
 * create_file - Function
 * @filename: name
 * @text_content: txt
 * Return: number
*/

int create_file(const char *filename, char *text_content)
{
	int ln = 0;
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[ln] != '\0')
		ln++;
	ln = write(fd, text_content, ln);
	if (ln < 0)
		return (-1);
	close(fd);
	return (1);
}
