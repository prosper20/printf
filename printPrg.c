#include "main.h"
#include <stdio.h>
/**
 * printPrg - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int printPrg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	bufferHandler(buf, '%', i);

	return (1);
}

