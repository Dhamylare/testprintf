#include "main.h"
/**
* _print_hex_extra - converts to octa
* @num: argument
* Return: always 0
*/

int _print_hex_extra(unsigned long int num)
{
	long int i, count = 0;
	long int *arr;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
