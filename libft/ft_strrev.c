/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:16:11 by doduwole          #+#    #+#             */
/*   Updated: 2023/02/02 12:00:20 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strrev(char *ptr)
{
	int	i;
	int	len;
	int	tmp;

	len = ft_strlen(ptr);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len / 2)
	{
		tmp = ptr[i];
		ptr[i] = ptr[len - i - 1];
		ptr[len - i - 1] = tmp;
		i++;
	}
	return (ptr);
}
