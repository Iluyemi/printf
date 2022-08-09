#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printIdentifiers - prints special characters
 * @q: character after the %
 * @arg: argument for the indentifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int printIdentifiers(char q, va_list arg)
{
	int Index;

	struct array function[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"b", print_unsignedToBinary},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_String},
		{NULL, NULL}
	};

	for (Index = 0; function[Index].indentifier != NULL; Index++)
	{
		if (function[Index].indentifier[0] == q)
			return (function[Index].printer(arg));
	}
	return (0);
}

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
	if (format == NULL)
		return (-1);

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

		get = printIdentifiers(format[i + 1], arg);
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
	va_end(arg);
	return (n_displayed);
}
