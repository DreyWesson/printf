/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 07:43:08 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/02 11:53:40 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_str(va_list	*args)
{
	char	*str;
	va_list	copy;

	va_copy(copy, *args);
	str = va_arg(*args, char *);
	if (!str)
		str = "(null)";
	return (ft_putstr(str));
}
