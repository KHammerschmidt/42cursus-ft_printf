#include "ft_printf.h"  

/* Transforms the input to char representation, differentiating between 
upper- and lowerletter format, depending on specifier.  */
static char	ft_convert_tolower_toupper(int temp, char specifier)
{
	char	c;

	c = 0;
	if (temp < 10)
		c = temp + 48;
	else if (specifier == 'X')
		c = temp + 55;
	else if (specifier == 'x' || specifier == 'p')
		c = temp + 87;
	return (c);
}

/* Prints the number. */
static void	ft_print_hexa_nbr(int temp, char *hexadecimal_nbr)
{
	while (temp != 0)
	{
		temp--;
		write(1, &hexadecimal_nbr[temp], 1);
	}
}

/* Prints a '0' when input is 0. */
static int	ft_null_input(int len)
{
	write(1, "0", 1);
	len++;
	return (len);
}

/* Converts int to hexadecimal and prints conversion.
The string is freed and its length returned. */
static int	ft_calculate_hexa_nbr(unsigned long save, char specifier)
{
	unsigned long	quotient;
	int				len;
	int				temp;
	char			*hexadecimal_nbr;

	len = 0;
	if (save == 0)
		return (ft_null_input(len));
	hexadecimal_nbr = (char *)malloc(sizeof(char *) * 17);
	if (!hexadecimal_nbr)
		return (0);
	quotient = save;
	while (quotient != 0)
	{
		temp = quotient % 16;
		hexadecimal_nbr[len] = ft_convert_tolower_toupper(temp, specifier);
		len++;
		quotient = quotient / 16;
	}
	temp = len;
	ft_print_hexa_nbr(temp, hexadecimal_nbr);
	free(hexadecimal_nbr);
	return (len);
}

/* Handles the conversion of input 'p', 'x' and 'X', prints the input and returnes the length. */
int	ft_print_hexa(va_list arg, char specifier)
{
	void			*void_ptr;
	int				len;
	unsigned long	save;
	unsigned long	result;

	len = 0;
	if (specifier == 'p')
	{
		void_ptr = va_arg(arg, void *);
		save = (unsigned long)void_ptr;
		write(1, "0x", 2);
		len = 2;
	}
	else
		save = va_arg(arg, unsigned int);
	result = ft_calculate_hexa_nbr(save, specifier);
	len = len + result;
	return (len);
}
