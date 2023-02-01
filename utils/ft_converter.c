/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:18:41 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/01 17:18:11 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_converter(char val, va_list* args)
{
	int	i;
	va_list copy;

	va_copy(copy, *args);
	i = 0;
	if (val == 'c')
		i = convert_char(args);
	if (val == 's')
		i = convert_str(args);
	if (val == 'i' || val == 'd')
		i = convert_int(args);
	if (val == 'p')
		i = convert_ptr(args, val);
	if (val == 'x' || val == 'X')
		i = convert_x(args, val);
	if (val == 'u')
		i = convert_u(args);
	if (val == '%')
		i = ft_putchar(val);
	return (i);
}
