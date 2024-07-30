#include "main.h"
/**
* _print_oct - converts to octa
* @ap: argument
* Return: always 0
*/

int _print_oct(va_list ap)
{
	int i, count = 0;
	int *arr;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	return (count);
}
