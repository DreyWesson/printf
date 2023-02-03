/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:02:20 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/03 08:26:02 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_int(va_list* args)
{
	int			val;
	int			ret;
	const char* ptr;

	ret = 0;
	val = va_arg(*args, int);
	ptr = (const char*)ft_itoa(val);
	ret += ft_putstr((char*)ptr);
	free((void*)ptr);
	return (ret);
}
