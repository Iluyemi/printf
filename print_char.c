#include "main.h"

/**
 * print_char - fucntion that handles character
 * @int: variable data type
 * Return:  _putchar
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
