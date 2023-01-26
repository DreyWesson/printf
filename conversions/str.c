/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 07:43:08 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/26 13:16:44 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	convert_str(va_list args)
{
	char	*str;
	int		itr;

	str = va_arg(args, char *);

	itr = -1;
	while (str[++itr])
		write(1, &str[itr], 1);
	return (itr);
}
