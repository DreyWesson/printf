/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:02:35 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/01 21:16:52 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char* ft_dtox(unsigned long n, char val)
{
	char* ptr;
	int		len;
	unsigned long	rem;
	int		j;

	j = 0;
	len = ft_nbrlen(n);
	ptr = ft_calloc(len + 1, sizeof(char));
	ptr[len] = '\0';
	if (!ptr)
		return (NULL);
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			ptr[j++] = 48 + rem;
		if (rem >= 10 && val != 'X')
			ptr[j++] = 87 + rem;
		else if (rem >= 10 && val == 'X')
			ptr[j++] = 55 + rem;
		n /= 16;
	}
	ft_strrev(ptr);
	return (ptr);
}
