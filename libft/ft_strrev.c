/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:16:11 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 19:12:08 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strrev(char *ptr)
{
	int		i;
	int		j;
	char	tmp;
	int		len;

	if (!ptr)
		return (NULL);
	i = 0;
	len = ft_strlen(ptr);
	j = len - 1;
	while (i < j)
	{
		tmp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = tmp;
		i++;
		j--;
	}
	ptr[len] = '\0';
	return (ptr);
}
