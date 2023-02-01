/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:10:37 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/01 17:16:37 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_x(va_list* args, char val)
{
	unsigned int	ptr;
	int				ret;
	va_list			copy;
	char* c;

	ret = 0;
	va_copy(copy, *args);
	ptr = va_arg(*args, unsigned int);
	if (ptr == 0)
		return ('\0');
	c = ft_dtox(ptr, val);
	ret += ft_putstr(c);
	free(c);
	return (ret);
}
