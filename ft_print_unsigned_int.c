/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:47:15 by khammers          #+#    #+#             */
/*   Updated: 2022/03/07 18:19:58 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Function ft_print_unsigned_int() prints an unsigned int passed by the value
of va_arg(arg, int) and assigned to 'print_int'. */
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
