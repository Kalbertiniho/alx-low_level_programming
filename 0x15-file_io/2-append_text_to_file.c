#include "main.h"

/**
 * append_text_to_file - The text to be appended
 * At the file conclusion
 * @text_content: At the file conclusion
 * @filename: The file name to be pointed
 * Put the string
 *
 * Return: -1; if the file is invalid
 * The user will not be granted permission
 * If the filename does not exist
 * Or else input 1
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}
