#include "main.h"

/**
 * bufferHandler - concatenates the buffer characters
 * @buf: buffer pointer
 * @c: charcter to concatenate
 * @bufIndex: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int bufferHandler(char *buf, char c, unsigned int bufIndex)
{
	if (bufIndex == 1024)
	{
		bufferPrint(buf, bufIndex);
		bufIndex = 0;
	}
	buf[bufIndex] = c;
	bufIndex++;
	return (bufIndex);
}
