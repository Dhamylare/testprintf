#include "main.h"
/**
* _print_int - prints integers
* @ap: arguments to be printed
* Return: 0 if success
*/
int _print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int num, last = n % 10, digit, exp = 1, i = 1;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num + (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
#include "main.h"
/**
* _print_d - prints decimal ints
* @ap: arguments to be printed
* Return: 0 if success
*/
int _print_d(va_list ap)
{
	int n = va_arg(ap, int);
	int num, last = n % 10, digit, exp = 1, i = 1;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num + (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
