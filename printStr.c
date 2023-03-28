#include "main.h"

/**
 * printStr - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @bufIndex: index for buffer pointer
 * Return: On success 1.
 */
int printStr(va_list arguments, char *buf, unsigned int bufIndex)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			bufIndex = bufferHandler(buf, nill[i], bufIndex);
		return (6);
	}
	for (i = 0; str[i]; i++)
		bufIndex = bufferHandler(buf, str[i], bufIndex);
	return (i);
}
