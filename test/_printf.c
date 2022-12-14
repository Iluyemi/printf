#include "main.h"
/**
 * _printf - prints output to standard output
 * @format: Formatted string output
 * @...: Unknown varable argument
 * Return: Return 1 if successful
 */

int _printf(const char *format, ...)
{
	unsigned int i;
	int get = 0, n_displayed = 0;
	va_list arg;

	va_start(arg, format);
	if (format != NULL)
	{
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			n_displayed++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		if (function_pointer != NULL)
		get = function_pointer(format[i + 1], arg);
		if (get == -1 || get != 0)
			i++;
		if (get > 0)
			n_displayed += get;

		if (get == 0)
		{
			_putchar('%');
			n_displayed++;
		}
	}
	}
	else
		return(-1);
	va_end(arg);
	return (n_displayed);
}
