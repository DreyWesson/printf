/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:00:49 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/01 17:23:29 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_u(va_list* args)
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
	c = ft_utoa(ptr);
	ret += ft_putstr(c);
	free(c);
	return (ret);
}
