#include "main.h"

/**
 * function_pointer - prints special characters
 * @q: character after the %
 * @arg: argument for the indentifier
 * @struct array: created data type
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int function_pointer(char q, va_list arg)
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
		{"S", print_STR},
		{NULL, NULL}
	};

	for (Index = 0; function[Index].specifier != NULL; Index++)
	{
		if (function[Index].specifier[0] == q)
			return (function[Index].function(arg));
	}
	return (0);
}

