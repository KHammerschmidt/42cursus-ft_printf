/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 11:40:48 by khammers          #+#    #+#             */
/*   Updated: 2021/08/09 13:37:03 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** The function ft_print_string() prints the input of va_arg(arg, char *) by
** calling ft_putstr_fd(). If the string is empty, '(null)' is printed. The
** respective char_count is returned.
*/
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
