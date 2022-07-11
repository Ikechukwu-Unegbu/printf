#include "main.h"

/**
 * buffer - prints the buffer
 * @buf: buffer pointer argument
 * @nbuf: number of bytes to print
 * Return: no of bytes printed.
 */
int buffer(char *buff, unsigned int nbuff)
{
	return (write(1, buff, nbuff));
}
