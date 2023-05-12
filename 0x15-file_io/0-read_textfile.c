#include "main.h"

/**
 *  read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read.
 * @letters: num of letters it should read and print.
 *
 * Return: number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	char *buffer;
	ssize_t lenr;
	ssize_t lenw;

	if (filename == NULL)
		return (0);
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fdes);
		return (0);
	}
	lenr = read(fdes, buffer, letters);
	close(fdes);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
