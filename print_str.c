#include "main.h"
/**
* _print_str - prints a string
* @ap: arguments
* Return: returns the length of the string
*/

int _print_str(va_list ap)
{
	char *str;
	int i, length;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}

}
