#include "main.h"
/**
 * _printf - prints output to standard output
 * @format: Formatted string output
 * @...: Unknown varable argument
 * Return: Return 1 if successful
 */


int _printf(const char *format, ...)
{
	va_list arg;
	int get;
	int i = 0;
	int n_displayed = 0;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%' || (format[i] == '%' && format[i + 1] == '%'))
		{
		n_displayed += _putchar(format[i]);
		i++;
		continue;
		}
		else
		{
			get = function_pointer(format[i + 1], arg);
			if (get == -1 || get != 0)
			i++;
			if  (get > 0)
			n_displayed += get;
		}
		i++;
	}


	va_end(arg);
	return (n_displayed);
}
