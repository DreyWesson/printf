/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:47:24 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/31 06:35:17 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_ptr(va_list* args)
{
	unsigned long	ptr;
	int				ret;
	char* c;
	va_list copy;

	va_copy(copy, *args);
	ret = 0;
	ptr = va_arg(*args, unsigned long);
	if (!ptr)
		return ('\0');
	ret += ft_putstr("0x");
	c = ft_dtox(ptr);
	ret += ft_putstr(c);
	free(c);
	return (ret);
}
