/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 17:27:39 by khammers          #+#    #+#             */
/*   Updated: 2021/09/16 17:04:45 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/*
** Prototype: int	ft_printf(const char *input, ...);
**
** The function ft_printf() takes a variable number of arguments, stated as an
** elipsis (...) and returns the total number of printed characters. The
** variadic arguments are accessed using the <stdarg.h> library (macros:
** va_start, va_end).
** (1) declares an object va_list which is used by the macros.
** (2) enables access to variadic function arguments using va_start;
** (3) while input string is !='\0' it loops through the string and either
** (3a) detects a '%', iterates and calls ft_conversion() to detect data and
** type to be printed or
** (3b) prints each individual character calling ft_putchar_fd().
** (4) once input string is NULL, the traversal of variadic function arguments
** is ended using va_end, 'char_ptr' is freed and
** (5) the overall number of characters printed is returned (char_count);
*/
int	ft_printf(const char *input, ...)
{
	int		i;
	int		char_count;
	va_list	arg;

	i = 0;
	char_count = 0;
	va_start(arg, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			char_count = char_count + ft_conversion(arg, input[i]);
		}
		else
		{
			ft_putchar_fd(input[i], 1);
			char_count++;
		}
		i++;
	}
	va_end(arg);
	return (char_count);
}

// int	main(void)
// {
// 	char input[] = "";
// 	ft_printf("%s\n", input);
// 	printf("%s\n", input);
// 	return (0);
// }