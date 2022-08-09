#include "main.h"

int (*function(char c))(va_list)
{
	if( c = 'c')
	  return(print_char(va_arg(ap, int)));
	if (c = 's')
	  return (print_string(va_arg(ap, char *)));
	if (c = 'd')
	  return (print_double(va_arg(ap, double)));
	if (c = 'i')
	  return (print_int(va_arg(ap, int)));

	return(NULL);
}

