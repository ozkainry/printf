/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozozdemi <ozozdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:41:24 by ozozdemi          #+#    #+#             */
/*   Updated: 2022/11/23 17:25:28 by ozozdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_len(char c, int *len);
void	ft_putstr_len(char *str, int *len);
void	ft_putnbr_len(int n, int *len);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void	ft_printf_check(char c, va_list *args, int *len, int *i);
void	ft_putnbr_hexa(unsigned int n, char *base, int *len);
void	ft_putnbr_hexa2(unsigned long long int n, char *base, int *len);
void	ft_ptr(void *ptr, int *len);

#endif