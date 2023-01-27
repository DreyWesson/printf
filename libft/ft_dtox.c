/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:02:35 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 19:15:57 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_dtox(unsigned long n)
{
	char	*ptr;
	int		len;
	long	rem;
	int		j;

	j = 0;
	len = ft_nbrlen(n);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return ('\0');
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			ptr[j++] = 48 + rem;
		else
			ptr[j++] = 87 + rem;
		n /= 16;
	}
		// while (ptr[j++])
		// {
		// 	printf("%c", ptr[j]);
		// }
	ft_strrev(ptr);
	return (ft_putstr(ptr));
}
