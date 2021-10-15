/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:17:12 by khammers          #+#    #+#             */
/*   Updated: 2021/08/09 13:47:00 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** The function get_size_unsigned() counts the number of digits of the unsigned
** long int 'n' for dynamic memory allocation later.
*/
static int	get_size_unsigned(unsigned long int n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		size = 1;
		return (size);
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

/*
** The function copy_digits_unsigned() transforms each individual digit
** into char representation, mallocs '*str' with the size.
**
*/
static char	*copy_digits_unsigned(unsigned long int b, int size)
{
	char	c;
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
	if (b == 0)
		str[0] = 0 + '0';
	i = size - 1;
	while (b > 0)
	{
		c = b % 10 + '0';
		str[i] = c;
		i--;
		b = b / 10;
	}
	str[size] = '\0';
	return (str);
}

/*
** Prototype: char	*ft_itoa_unsigned(unsigned int n);
**
** The function ft_itoa_unsigned() transforms an unsigned int
** into char representation, handling INT_MIN by casting 'n' to an unsigned
** long int.
*/
char	*ft_itoa_unsigned(unsigned int n)
{
	int					size;
	char				*str;
	unsigned long int	b;

	b = (unsigned int long)n;
	size = get_size_unsigned(b);
	return (str = copy_digits_unsigned(b, size));
}
