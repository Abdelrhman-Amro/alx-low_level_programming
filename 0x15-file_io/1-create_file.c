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
	int fd = open(filename, O_CREAT | O_WRONLY, 0600);

	while (text_content[ln] != '\0')
		ln++;
	ln = write(fd, text_conten, ln);
	close(fd);
	return (1);
}
