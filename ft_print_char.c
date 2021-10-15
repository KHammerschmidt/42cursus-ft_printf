/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:49:45 by khammers          #+#    #+#             */
/*   Updated: 2021/08/09 13:35:00 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** ft_print_char() prints an individual character passed on by the argument
** va_arg(arg, int) by calling the function ft_putchar_fd and returnes a
** char_count of 1.
*/
int	ft_print_char(va_list arg)
{
	int	char_count;

	char_count = 1;
	ft_putchar_fd(va_arg(arg, int), 1);
	return (char_count);
}
