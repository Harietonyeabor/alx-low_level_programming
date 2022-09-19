#include "main.h"

/**
 * _puts - funtiin that prints a string followed by s newline
 * @str: represents the character
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
