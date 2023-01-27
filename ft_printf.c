/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:46:18 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 19:32:24 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// TODO: 'uxX'
int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	if (str_validator(format) <= 0)
		return (-1);
	i = -1;
	ret = 0;
	va_start(args, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[++i] == '%')
				ret += ft_putchar(&format[i]);
			else
				ret += ft_converter(format[i], args);
		}
		else
			ret += ft_putchar(&format[i]);
	}
	return (ret);
}

int	main(void)
{
	int	i;

	i = 42;
	printf("->%d %p\n", ft_printf("%p\n", &i), &i);
	return (0);
}
// printf("%d\n",ft_printf("hello %s\n","world"));
// printf("%i\n", 2147483647);
// printf("len = %d\n", printf("hel%co\n", 'l'));
// printf("my len = %d\n", ft_printf("Hel%co\n", 'l'));
// printf("->%d\n",ft_printf("Hello %s", "world"));
// printf("->%d\n",printf("Hello %s", "world"));
// printf("->%d\n", ft_printf("hello %d\n", 23456));
// printf("->%d\n", ft_printf("%p\n", &i));
// ft_printf("%p\n", &i);
