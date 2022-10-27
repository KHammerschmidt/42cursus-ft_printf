#include "ft_printf.h"  

/* Counts the number of digits of 'n' for memory allocation later. */
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

/* Transforms each individual digit into char representation. */
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

/* Transforms an int into char representation, handling INT_MIN. */
char	*ft_itoa_unsigned(unsigned int n)
{
	int				size;
	char			*str;
	unsigned long	b;

	b = (unsigned long)n;
	size = get_size_unsigned(b);
	str = copy_digits_unsigned(b, size);
	return (str);
}
