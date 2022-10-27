#include "ft_printf.h"  

/* Prints the input parameter in its associated data type. Conversions 'c', 's', 'i', 'd',
'p', 'x', 'X' and '%' are handled. Return value is printed character count. */
int	ft_conversion(va_list arg, char specifier)
{
	int	char_count;

	char_count = 0;
	if (specifier == 'c')
		char_count = ft_print_char(arg);
	else if (specifier == 's')
		char_count = ft_print_string(arg);
	else if (specifier == 'i' || specifier == 'd')
		char_count = ft_print_int(arg);
	else if (specifier == 'p')
		char_count = ft_print_hexa(arg, specifier);
	else if (specifier == 'x' || specifier == 'X')
		char_count = ft_print_hexa(arg, specifier);
	else if (specifier == 'u')
		char_count = ft_print_unsigned_int(arg);
	else if (specifier == '%')
	{
		ft_putchar_fd('%', 1);
		char_count++;
	}
	return (char_count);
}
