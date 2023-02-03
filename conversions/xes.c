/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xes.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:10:37 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/03 08:26:20 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_xes(va_list* args, char val)
{
	unsigned int	ptr;
	int				ret;
	char* c;

	ret = 0;
	ptr = va_arg(*args, unsigned int);
	if (ptr == 0)
		return (ft_putchar('0'));
	c = ft_dtox(ptr, val);
	ret += ft_putstr(c);
	free(c);
	return (ret);
}
