#include "main.h"
/**
* _strlen - prints the string length
* @str: string pointer
* Return: an int
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (0);
}
/**
* _strlenconst - print the length of a const char string
* @str: pointer to string
* Return: returns an integer
*/
int _strlenconst(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (0);
}
