/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:02:20 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/26 19:17:36 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_int(va_list args)
{
	int			val;
	const char	*ptr;

	val = va_arg(args, int);
	ptr = (const char *)ft_itoa(val, 10);
	return (ft_putstr((char *)ptr));
}
