/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:08:48 by capapes           #+#    #+#             */
/*   Updated: 2024/04/10 21:09:01 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_add_res(int len, int res);
size_t	ft_strlen(const char *s);
int		ft_putchar_len(char c);
int		ft_putchar_add(char c, int len);
int		ft_putstr_len(const char *s);
int		ft_putstr_add(const char *s, int len);
int		ft_putnbr_base(unsigned long int n, char *base, int neg);
int		ft_putnbr_base_add(unsigned long int n, char *base, int len);
int		ft_putnbr_base_int(int n);
int		ft_putptr_len(unsigned long ptr);
int		ft_printf(const char *s, ...);

#endif