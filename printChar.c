#include "main.h"
#include <stdio.h>
/**
 * printChar - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @bufIndex: index for buffer pointer
 * Return: On success 1.
 */
int printChar(va_list arguments, char *buf, unsigned int bufIndex)
{
	char c;

	c = va_arg(arguments, int);
	bufferHandler(buf, c, bufIndex);

	return (1);
}
