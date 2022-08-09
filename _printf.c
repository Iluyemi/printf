#include "main.h"

/**
 *_printf - produces output according to a format
 *
 *@format : Formatted string output
 *@ ... : Unknown number of arguments
 *
 *Return : Return arguments
 */

int _printf(const char *format, ...)
{
        int i = 0, num = 0;
        int (*get)(va_list);
        va_list args;

        va_start(args, format);

	if (format == NULL)
		return (-1);
        while (*(format + i))
        {
                if (*(format + i) != '%')
                {
                        num += _putchar(*(format + i));
			i++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			num += _putchar(*(format + i));
			i++;
			continue;
		}
		get = get_function(format[++i]);
		if ((get) != NULL)
		{
			num += get(args);
		}
		else
		{
			if (*(format + i) == '\0')
				return (-1);
			num += _putchar(format[i - 1]);
			num += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (num);
}
