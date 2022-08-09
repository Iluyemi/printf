#include "main.h"

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
