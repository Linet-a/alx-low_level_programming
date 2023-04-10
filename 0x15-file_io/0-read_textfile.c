#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The file to read from
 * @letters: num  of characters it should print to the STDOUT
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f = 0, ch = 0;
	char *buff;

	if (!filename || !letters)
		return (0);

	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	ch = read(f, buff, letters);
	ch = write(STDOUT_FILENO, buff, ch);
	if (ch < 0)
		return (0);

	close(f);
	free(buff);
	return (ch);
}
