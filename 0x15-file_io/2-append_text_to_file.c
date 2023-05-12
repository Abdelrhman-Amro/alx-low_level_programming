#include "main.h"

/**
 * append_text_to_file - function
 * @filename: name
 * @text_content: txt
 * Return: I
*/

int append_text_to_file(const char *filename, char *text_content)
{ 
	int fd, ln = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[ln] != '\0')
		ln++;
	if (ln == 0)
		return (1);
	ln = write(fd, text_content, ln);
	close(fd);
	return (1);
}
