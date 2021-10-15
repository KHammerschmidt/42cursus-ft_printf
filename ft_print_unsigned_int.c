/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:47:15 by khammers          #+#    #+#             */
/*   Updated: 2021/08/09 14:08:23 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Function ft_print_unsigned_int() prints an unsigned int passed by the value
** of va_arg(arg, int) and assigned to 'print_int'.
** (1) if print_int is >=0 the input is transformed to char representation by
** calling ft_itoa_unsigned().
** (2) in case of a negative int, it is transformed to unsigned int value and
** then transformed to char representation.
** (3) the string is printed calling ft_putstr_fd(),
** (4) the char_count determined by the string's length (ft_strlen()),
** (5) the char_ptr freed before the overall char_count is returned.
**
*/
int	ft_print_unsigned_int(va_list arg)
{
	char		*char_ptr;
	int			char_count;
	int long	print_int;

	print_int = va_arg(arg, int);
	if (print_int >= 0)
		char_ptr = ft_itoa_unsigned((unsigned int)print_int);
	else
	{
		print_int = (4294967295 + print_int) + 1;
		char_ptr = ft_itoa_unsigned((unsigned int)print_int);
	}
	ft_putstr_fd(char_ptr, 1);
	char_count = ft_strlen(char_ptr);
	free(char_ptr);
	return (char_count);
}
