#include "main.h"
/**
* _print_pointer - prints pointer formats
* @ap: variable arguments
* Return: always 0 if success
*/
int _print_pointer(va_list ap)
{
	void *p;
	char *s = "(nil)";
	int i, b;
	long int n;

	p = va_arg(ap, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	n = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = _print_hex_extra(n);
	return (b + 2);

}
