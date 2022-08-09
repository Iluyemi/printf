#include "main.h"
/**
 * _printf - printf prototype
 * format: input char
 * Return: calculated printed character 
 */
int _printf(const char *format, ...)
{
va_list ap;
va_start(ap, format);
int counter = 0, string = 0, Decimal;
int a = 0;
	while (format[counter] != '\0')
	{
		if (format[counter] != '%')
		{
			_putchar(format[counter]);
			a++;
		}
	else
	{

	}
	counter++;
	}
	counter++;
}
va_end(ap);

return (a);
}
