#include "main.h"

/**
* _print_xchar - print special charcters
* @ap: variable arguments
* Return: characters printed
*/
int _print_xchar(va_list ap)
{
	char *s;
	int i, len = 0;
	int temp;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{	_putchar('\\');
			_putchar('x');
			len = len + 2;
			temp = s[i];
			if (temp < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + _print_HEX_extra(temp);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
