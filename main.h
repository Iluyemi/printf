#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int function_pointer(char q, va_list arg);

/**
 * struct array - array for format specifier
 * @array: type name 
 * @function: function pointer
 */
  
typedef struct array
{
  char *specifier;
  int (*function)(va_list);
} array;

#endif /* _MAIN_H_ */
