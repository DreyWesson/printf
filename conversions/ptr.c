/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:47:24 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/01 20:58:30 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_ptr(va_list* args, char val)
{
	unsigned long	ptr;
	int				ret;
	va_list			copy;
	char* c;

	ret = 0;
	va_copy(copy, *args);
	ptr = va_arg(*args, unsigned long);
	if (ptr == 0)
		return (ft_putchar('\0'));
	ret += ft_putstr("0x");
	c = ft_dtox(ptr, val);
	ret += ft_putstr(c);
	free(c);
	return (ret);
}
