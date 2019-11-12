#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: the file name
 * @letters: the letters to be outputed
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int rd, opn, we;
char *string = malloc(letters);
if (string == NULL)
return (0);
if (filename == NULL)
return (0);
opn = open(filename, O_RDONLY);
if (opn == -1)
return (0);
rd = read(opn, string, letters);
if (rd == -1)
return (0);
we = write(STDOUT_FILENO, string, rd);
if (we == -1)
return (0);
close(opn);
return (we);
}
