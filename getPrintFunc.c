#include "main.h"
/**
 * getPrintFunc - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*getPrintFunc(const char *s, int index))(va_list, char *, unsigned int)
{
	pStruct ps[] = {
		{"c", printChar}, {"s", printStr},
		{"%", printPrg}, {NULL, NULL},
	};

	int i = 0, j = 0, indexHolder;

	indexHolder = index;
	while (ps[i].type_arg)
	{
		if (s[index] == ps[i].type_arg[j])
		{
			if (ps[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = indexHolder;
		}
	}
	return (ps[i].func);
}

