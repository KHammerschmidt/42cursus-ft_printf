/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:36:50 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 15:17:26 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** The function ft_conversion() prints the input parameter of printf in its
** associated data type, indicated by the letter/symbol that follows the '%' in
** the input string. The converstions 'c', 's', 'i', 'd', 'p', 'x', 'X' and '%'
** are being handled and the respective char_count printed returned.
*/
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
