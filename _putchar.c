#include "main.h"
/**
* _putchar - prints character
* @c: character to be printed
* Return: return (0)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}
