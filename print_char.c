#include "main.h"

/**
 * print_char - fucntion that handles character
 * @arg: variable data type
 * Return:  _putchar
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_string - prints a string
 * @arg: va_list
 * Return: int
 */


int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int length = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		_putchar(*s);
		length++;
		s++;
	}

	return (length);
}
