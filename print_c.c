#include "main.h"

/**
* _print_char - prints characters
* @ap: arguments
* Return: return 0 if success
*/

int _print_char(va_list ap)
{
	char ptr;

	ptr = va_arg(ap, int);
	_putchar(ptr);
	return (0);
}
