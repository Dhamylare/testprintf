#include "main.h"
/**
* _printf - function similar to formatted output printf
* @format: format identifier to be printed
* Return: Always 0 if successful
*/

int _printf(const char *format, ...)
{
	print m[] = {
		{"%c", _print_char}, {"%s", _print_str},
	{"%%", _print_percent}, {"%d", _print_d}, {"%i", _print_int},
	{"%r", _print_rev}, {"%R", _print_rot13},
	{"%b", _print_bin}, {"%o", _print_oct},
	{"%x", _print_hex}, {"%X", _print_HEX}, {"%u", _print_unsigned},
	{"%S", _print_xchar}, {"%p", _print_pointer}
	};

	va_list args;
	int i = 0, len = 0, g;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		g = 13;
		while (g >= 0)
		{
			if (m[g].id[0] == format[i] && m[g].id[1] == format[i + 1])
			{
				len = len + m[g].f(args);
				i = i + 2;
				goto Here;
			}
			g--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
