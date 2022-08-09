#include "main.h"

/**
 * print_char - fucntion that handles character
 * @int: variable data type
 * Return:  _putchar
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * pr_str - prints a string
 * @args: va_list
 * Return: int
 */


int pr_str(va_list arg)
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
