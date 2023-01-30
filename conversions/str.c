/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 07:43:08 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/30 20:21:04 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_str(va_list* args)
{
	char* str;
	va_list copy;

	va_copy(copy, *args);
	str = va_arg(*args, char*);
	return (ft_putstr(str));
}
