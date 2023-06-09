#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @func: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*func)(va_list, char *, unsigned int);
} pStruct;

int _printf(const char *format, ...);
unsigned int bufferHandler(char *buf, char c, unsigned int bufIndex);
int bufferPrint(char *buf, unsigned int nbuf);
int countPrintFunc(const char *s, int index);
int printChar(va_list arguments, char *buf, unsigned int bufIndex);
int (*getPrintFunc(const char *s, int index))(va_list, char *, unsigned int);
int printPrg(va_list __attribute__((unused)), char *, unsigned int);
int printStr(va_list arguments, char *buf, unsigned int bufIndex);
int printInt(va_list arguments, char *buf, unsigned int bufIndex);

#endif

