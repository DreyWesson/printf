/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:47:24 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/03 08:27:07 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_ptr(va_list* args, char val)
{
	unsigned long	ptr;
	int				ret;
	char* c;

	ret = 0;
	ptr = va_arg(*args, unsigned long);
	ret += ft_putstr("0x");
	if (ptr == 0)
		return (ft_putchar('0') + ret);
	c = ft_dtox(ptr, val);
	ret += ft_putstr(c);
	free(c);
	return (ret);
}
