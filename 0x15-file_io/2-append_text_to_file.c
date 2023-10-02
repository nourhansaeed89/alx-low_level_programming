#include "main.h"
#include <string.h>
/**
 * _strlen - function determin the length of a string
 *
 * @s: input string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * append_text_to_file - apend file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 if faile
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int folder;
	ssize_t n = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	folder = open(filename, O_WRONLY | O_APPEND);

	if (folder == -1)
		return (-1);
	if (len)
		n = write(folder, text_content, len);
	close(folder);
	return (n == len ? 1 : -1);
}

