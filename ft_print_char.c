/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:49:45 by khammers          #+#    #+#             */
/*   Updated: 2022/03/07 18:22:29 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Prints an individual character passed on by the argument va_arg(arg, int)
and returns  char_count of 1. */
int	ft_print_char(va_list arg)
{
	int	char_count;

	char_count = 1;
	ft_putchar_fd(va_arg(arg, int), 1);
	return (char_count);
}
