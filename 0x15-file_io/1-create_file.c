#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * create_file - check the code for Holberton School students.
 * @filename: the file name
 * @text_content: text to be inserted
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
int opn, we, i;
if (filename == NULL)
return (-1);
opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (opn == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[i] != '\0')
{
i++;
}
we = write(opn, text_content, i);
if (we == -1)
return (-1);
close(opn);
return (1);
}
