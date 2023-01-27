/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:02:35 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 21:20:27 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_dtox(unsigned long n)
{
	char	*ptr;
	int		len;
	long	rem;
	int		j;

	j = 0;
	len = ft_nbrlen(n);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			ptr[j++] = 48 + rem;
		else
			ptr[j++] = 87 + rem;
		n /= 16;
	}
	ft_strrev(ptr);
	return (ptr);
}
