/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:44:59 by khammers          #+#    #+#             */
/*   Updated: 2021/08/09 13:39:41 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** The function ft_print_int() transforms the input of va_arg(arg, int) to
** char representation by calling ft_itoa(), which allocates with malloc(3) and
** prints the string calling ft_putstr_fd(). The char_count printed is the
** length of the string (ft_strlen()) and 'char_ptr' freed before char_count is
** returned.
*/
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
