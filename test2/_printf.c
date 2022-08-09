#include "main.h"
/**
 * print_num - stdout
 * @a: input char
 * Return: 1 if successful
 */
int print_num(int a)
{
	while (a > 0)
	{
		_putchar((a % 10) + '0');
		a /= 10;
	}
	_putchar('\n');
	return (1);
}

/**
 * _printf - printf prototype
 * @format: input char
 * Return: calculated printed character
 */
int _printf(const char *format, ...)
{
va_list ap;
va_start(ap, format);
int counter = 0, string = 0, a = 0;
char *string_output;
	while (format[counter] != '\0')
	{
		if (format[counter] != '%')
		{
			_putchar(format[counter]);
			a++;
		}
	else
	{
	switch (format[counter + 1])
	{
		case 'c':
			_putchar(va_arg(ap, int));
			a++;
		break;
		case '%':
			_putchar('%');
			a++;
		break;
		case 's':
		string_output = va_arg(ap, char *);
		while (string_output[string] != '\0')
		{
			_putchar(string_output[string]);
			a++;
			string++;
		}
		break;
	}
	counter++;
	}
	counter++;
	}
print_num(a);
va_end(ap);
return (a);
}
