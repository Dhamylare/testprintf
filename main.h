#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
* struct format - format converter
* @id: identifiers
* @f: function pointer
*/

typedef struct format
{
	char *id;
	int (*f)();
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list ap);
int _print_str(va_list ap);
int _strlen(char *str);
int _strlenconst(const char *str);
int _print_percent(void);
int _print_d(va_list ap);
int _print_int(va_list ap);
int _print_bin(va_list ap);
int _print_unsigned(va_list ap);
int _print_oct(va_list ap);
int _print_hex(va_list ap);
int _print_HEX(va_list ap);
int _print_HEX_extra(unsigned int num);
int _print_xchar(va_list ap);
int _print_hex_extra(unsigned long int num);
int _print_pointer(va_list ap);
int _print_rev(va_list ap);
int _print_rot13(va_list ap);
int *_strcpy(char *dest, char *src);

#endif
