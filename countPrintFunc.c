#include "main.h"
/**
 * countPrintFunc - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int countPrintFunc(const char *s, int index)
{
	pStruct ps[] = {
	{"c", printChar}, {"s", printStr},
	{"%", printPrg}, {"i", printInt},
	{"d", printInt}, {NULL, NULL},
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
	return (j);
}
