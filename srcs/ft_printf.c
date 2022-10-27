#include "ft_printf.h"  

/* Ft_printf() takes a variable number of arguments, stated as an elipsis (...)
and returns the total number of printed characters. The variadic arguments are 
accessed using the <stdarg.h> library (macros: va_start, va_end). */
int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list	arg;

	i = 0;
	char_count = 0;
	va_start(arg, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			char_count = char_count + ft_conversion(arg, input[i]);
		}
		else
		{
			ft_putchar_fd(input[i], 1);
			char_count++;
		}
		i++;
	}
	va_end(arg);
	return (char_count);
}
