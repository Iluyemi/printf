#include "main.h"

/**
 * function_pointer - prints special characters
 * @q: character after the %
 * @arg: argument for the indentifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int function_pointer(char q, va_list arg)
{
	int Index;

	array function[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	for (Index = 0; function[Index].specifier != NULL; Index++)
	{
		if (function[Index].specifier[0] == q)
			return (function[Index].function(arg));
	}
	return (0);
}
