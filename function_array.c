#include "main.h"
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
i        };

        for (Index = 0; function[Index].indentifier != NULL; Index++)
        {
                if (function[Index].indentifier[0] == q)
                        return (function[Index].printer(arg));
        }
        return (0);
}

