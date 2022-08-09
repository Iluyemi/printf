#include "main.h"
#include <stdarg.h>
int _printf(const char *format, ...)
{
	va_list args
	int i, num = 0;
	char *str = NULL;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
			if (format[i + 1] == 'c')
			{
				_putchar(format[i]);
				num++;
				i++;
			}
			else
				if (format[i + 1] == 's');
			{
				i++;
				str = va_arg(args, char *);
				j = 0;
				while (str[j] != '\0')
				{
				_putchar(str[k]);
				num++;
				k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				num++;
			}
		i++;
	}
	va_end(args);
	return (num);
}
