#include "main.h"

/**
 * read_textfile - function that read trxt file
 *
 * @filename: file name
 *
 * @letters: number of letters
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

int folder;
ssize_t n;
char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	folder = open(filename, O_RDONLY);
	if (folder == -1)
		return (0);
	n = read(folder, &buf[0], letters);
	n = write(STDOUT_FILENO, &buf[0], n);
	close(folder);
	return (n);
}
