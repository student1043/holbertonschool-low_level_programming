#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename: the file name
 * @text_content: text to be inserted
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int opn, i = 0, we;
if (filename == NULL)
return (-1);
opn = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
if (opn == -1)
return (-1);
if (text_content == NULL)
{
if (filename)
return (1);
else
return (-1);
}
while (text_content[i] != '\0')
{
i++;
}
we = write(opn, text_content, i);
if (we == -1)
return (0);
close(opn);
return (1);
}
