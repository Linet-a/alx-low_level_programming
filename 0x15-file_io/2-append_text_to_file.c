
 

#include "main.h"
/**
 * append_text_to_file - a function that adds text at EOF
 * @filename: name of the file 
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f = 0, ch = 0, i = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		ch = write(f, text_content, i);
		if (ch < 0)
		return (-1);
	}
	close(f);
	return (1);
}
