/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:02:20 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/26 15:15:49 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_int(va_list args)
{
	int			i;
	int			j;
	int			val;
	const char	*ptr;

	val = va_arg(args, int);
	ptr = (const char *)ft_itoa(val);
	j = -1;
	i = (int)ft_strlen(ptr);
	while (ptr[++j])
		ft_putchar(&ptr[j]);
	return (i);
}
