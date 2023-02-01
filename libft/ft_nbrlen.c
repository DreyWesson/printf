/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:01:23 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/01 18:38:04 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

// int	ft_ndigits(unsigned int n)
// {
// 	int	i;

// 	i = 1;
// 	if (n == 0)
// 		return (i);
// 	while (n > 9)
// 	{
// 		i++;
// 		n /= 10;
// 	}
// 	return (i);
// }