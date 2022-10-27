#include "ft_printf.h"  

/* Prints an individual character passed on by the argument va_arg(arg, int)
and returns  character count of 1. */
int	ft_print_char(va_list arg)
{
	int	char_count;

	char_count = 1;
	ft_putchar_fd(va_arg(arg, int), 1);
	return (char_count);
}
