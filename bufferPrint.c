#include "main.h"

/**
 * bufferPrint - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int bufferPrint(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}

