#include "main.h"
/**
 * create_file - creates a file and adds permission to it
 * @filename: name of file
 * @text_content: conted to be written
 * Return: 1 if successfull and -1 on error.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t f = 0, ch = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (f < 0)
		return (-1);

	while (text_content[i])
		i++;
	ch = write(f, text_content, i);
	if (ch < 0)
		return (-1);

	close(f);
	return (1);
}
