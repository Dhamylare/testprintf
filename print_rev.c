#include "main.h"
/**
* _print_rev - prints string in reverse
* @ap: arguments
* Return: return the reversed string
*/
int _print_rev(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i, j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
