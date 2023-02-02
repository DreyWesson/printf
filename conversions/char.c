/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 06:51:27 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/02 11:52:13 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_char(va_list *args)
{
	char	i;
	va_list	copy;

	va_copy(copy, *args);
	i = (char)va_arg(*args, int);
	return (ft_putchar(i));
}
