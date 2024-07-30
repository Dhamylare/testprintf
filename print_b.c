#include "main.h"
/**
* _print_bin - converts to binary
* @ap: parameters to be converted
* Return: 0 when success
*/

int _print_bin(va_list ap)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (32 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (32 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
