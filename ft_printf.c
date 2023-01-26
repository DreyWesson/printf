/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:46:18 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/26 15:23:49 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

			// if (val == 'p')
			// if (val == 'u')
			// if (val == 'x')
			// if (val == 'X')
int	ft_validator(char val, va_list args)
{
	int	i;

	i = 0;
	if (val == 'c')
		i = convert_char(args);
	if (val == 's')
		i = convert_str(args);
	if (val == 'i' || val == 'd')
		i = convert_int(args);
	return (i);
}

void	char_counter(int *ret, const char *c)
{
	ft_putchar(c);
	*ret += 1;
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	i = -1;
	ret = 0;
	va_start(args, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[++i] == '%')
				char_counter(&ret, &format[i]);
			else
				ret += ft_validator(format[i], args);
		}
		else
			char_counter(&ret, &format[i]);
	}
	return (ret);
}

int	main(void)
{
	// printf("%i\n", 2147483647);
	// printf("len = %d\n", printf("hel%co\n", 'l'));
	// printf("my len = %d\n", ft_printf("Hel%co\n", 'l'));
	// printf("->%d\n",ft_printf("Hello %s", "world"));
	// printf("->%d\n",printf("Hello %s", "world"));
	// printf("->%d\n", ft_printf("Hello%%s"));
	printf("->%d\n", ft_printf("hello %d\n", 23456));
	// ft_printf("hello%i\n", 42);
	return (0);
}
