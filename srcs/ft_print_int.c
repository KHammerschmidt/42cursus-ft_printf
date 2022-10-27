#include "ft_printf.h"  

/* Transforms the input of va_arg(arg, int) to char representation and prints 
the string. 'char_ptr' is freed before char_count is returned. */
int	ft_print_int(va_list arg)
{
	char	*char_ptr;
	int		char_count;

	char_ptr = ft_itoa(va_arg(arg, int));
	ft_putstr_fd(char_ptr, 1);
	char_count = ft_strlen(char_ptr);
	free(char_ptr);
	return (char_count);
}
