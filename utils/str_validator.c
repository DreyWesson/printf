/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:20:43 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/27 19:29:40 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	str_validator(const char *format)
{
	int		i;
	char	c;
	char	*str;

	i = 0;
	str = "csidpuxX%";
	while (format[++i] != '\0')
	{
		if (format == NULL)
			return (-1);
		if (format[i] == '%')
		{
			i++;
			c = format[i];
			if (c == '\0' || !ft_strchr(str, c))
				return (-1);
		}
	}
	return (1);
}
