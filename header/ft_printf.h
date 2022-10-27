#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Libraries */
# include "../Libft/header/libft.h"
# include <stdarg.h>

/* Function for data type conversions. */
int		ft_printf(const char *format, ...);
int		ft_conversion(va_list arg, char specifier);
int		ft_print_char(va_list arg);
int		ft_print_string(va_list arg);
int		ft_print_hexa(va_list arg, char specifier);
int		ft_print_int(va_list arg);
int		ft_print_unsigned_int(va_list arg);
char	*ft_itoa_unsigned(unsigned int n);

#endif