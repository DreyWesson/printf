/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:28:47 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/26 19:15:57 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *str)
{
	int	ret;
	int	index;

	ret = 0;
	index = 0;
	while (str[index] != '\0')
	{
		ret += ft_putchar(&str[index]);
		index++;
	}
	return (ret);
}
