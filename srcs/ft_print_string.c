#include "ft_printf.h"  

/* Prints the input of va_arg(arg, char *), if the string is empty, '(null)' 
is printed. The respective character count is returned. */
int	ft_print_string(va_list arg)
{
	int		char_count;
	char	*str;

	str = va_arg(arg, char *);
	char_count = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		char_count = 6;
	}
	else
	{
		ft_putstr_fd(str, 1);
		char_count = ft_strlen(str);
	}
	return (char_count);
}
