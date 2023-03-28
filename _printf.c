#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string format.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, bufIndex = 0;
	va_list arguments;
	int (*printFunc)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	bufferPrint(buffer, bufIndex), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{	printFunc = getPrintFunc(format, i + 1);
				if (printFunc == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					bufferHandler(buffer, format[i], bufIndex), len++, i--;
				}
				else
				{
					len += printFunc(arguments, buffer, bufIndex);
					i += countPrintFunc(format, i + 1);
				}
			} i++;
		}
		else
			bufferHandler(buffer, format[i], bufIndex), len++;
		for (bufIndex = len; bufIndex > 1024; bufIndex -= 1024)
			;
	}
	bufferPrint(buffer, bufIndex), free(buffer), va_end(arguments);
	return (len);
}

