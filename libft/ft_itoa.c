/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:08:30 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 19:02:21 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	lesser_num(int *n, char *ptr, int *len, int base)
{
	if (*n == 0)
		ptr[0] = '0';
	if (*n < 0)
	{
		ptr[0] = '-';
		if (*n == -2147483648)
		{
			ptr[--(*len)] = '8';
			*n /= base;
		}
		*n = -(*n);
	}
}

char	*ft_itoa(int n, int base)
{
	char	*ptr;
	int		len;

	len = ft_nbrlen(n);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (n <= 0)
		lesser_num(&n, ptr, &len, base);
	while (len-- && n != 0)
	{
		ptr[len] = (n % base) + '0';
		n /= base;
	}
	return (ptr);
}
