#include "main.h"
/**
 * function_pointer - prints special characters
 * struct array - array
 * @q: character after the %
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int (*function_pointer(const char q))(va_list arg)
{
int Index = 0;
const int i = 10;
array function[] = {
{"c", print_char},
{"s", print_string},
{"d", print_int},
{"i", print_int},
{"u", print_unsigned},
{"b", print_unsignedToBinary},
{"o", print_oct},
{"x", print_hex},
{"X", print_HEX},
{"S", print_String}
};
for (Index = 0;	Index < i; Index++)
{
if (function[Index].indentifier[0] == q)
return (function[Index].printer);
}
return (NULL);
}


