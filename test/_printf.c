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
char *string_output;
char *pointer_output;
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
		case 'd': decimal = va_arg(ap, int);
			  while (num > 0)
			  {
				  _putchar((decimal % 10) + '0');
				  decimal /= 10;
				  a++;
			  }
			  break;
	}
	counter++;
	}
	counter++;
	}
va_end(ap);

return (a);
}
