/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:09:46 by capapes           #+#    #+#             */
/*   Updated: 2024/04/10 21:10:05 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(const char *s)
{
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	while (len >= 0 && s[len])
		len = ft_putchar_add(s[len], len);
	return (len);
}

int	ft_putstr_add(const char *s, int len)
{
	return (ft_add_res(len, ft_putstr_len(s)));
}
