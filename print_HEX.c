#include "main.h"
/**
* _print_HEX - converts to octa
* @ap: argument
* Return: always 0
*/

int _print_HEX(va_list ap)
{
	int i, count = 0;
	int *arr;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
