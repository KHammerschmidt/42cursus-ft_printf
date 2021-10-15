/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 08:56:50 by khammers          #+#    #+#             */
/*   Updated: 2021/08/09 13:21:19 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_conversion(va_list arg, char specifier);
int		ft_print_char(va_list arg);
int		ft_print_string(va_list arg);
int		ft_print_hexa(va_list arg, char specifier);
int		ft_print_int(va_list arg);
int		ft_print_unsigned_int(va_list arg);
char	*ft_itoa_unsigned(unsigned int n);

#endif