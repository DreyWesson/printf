/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:47:34 by doduwole          #+#    #+#             */
/*   Updated: 2023/01/31 14:05:12 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char* format, ...);
/*
** CONVERSION FUNCTIONS
*/
int		convert_char(va_list* args);
int		convert_str(va_list* args);
int		convert_int(va_list* args);
int		convert_ptr(va_list* args, char val);
int		convert_x(va_list* args, char val);
int		convert_u(va_list* args, char val);
int		is_valid_format(const char* format);
/*
** LIBFT FUNCTIONS
*/
int		ft_putstr(char* str);
int		ft_putchar(int c);
char* ft_itoa(int n, int base);
char* ft_strchr(const char* s, int c);
void	ft_bzero(void* s, size_t n);
void* ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char* str);
char* ft_strrev(char* ptr);
char* ft_dtox(unsigned long n, char val);
int		ft_nbrlen(int n);
/*
** UTIL FUNCTIONS
*/
int		ft_converter(char val, va_list* args);
int		str_validator(const char* format);

#endif