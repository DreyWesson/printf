/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:46:18 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 22:58:56 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	if (!str_validator(format))
		return ('\0');
	i = -1;
	ret = 0;
	va_start(args, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ret += ft_putchar(&format[i]);
			else
				ret += ft_converter(format[i], args);
		}
		else
			ret += ft_putchar(&format[i]);
	}
	return (ret);
}

// int	main(void)
// {
// printf("1->%d\n", ft_printf("%%\n")); // %p tester
// printf("2->%d\n", printf("%%\n")); // %p tester

// 	return (0);
// }
// printf("->%d %p\n", ft_printf("%p\n", &i), &i); // %p tester
// printf("->%d %p\n", ft_printf("%p\n", &i), &i); // %p tester
// printf("%d\n",ft_printf("hello %s\n","world")); //%s tester
// printf("->%d\n", ft_printf("hello %d\n", 23456)); // %d/%i tester
// printf("my len = %d\n", ft_printf("Hel%co\n", 'l')); // %c tester
