/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:10:28 by capapes           #+#    #+#             */
/*   Updated: 2024/04/10 21:10:34 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_add_res(int len, int res)
{
	if (len == -1 || res == -1)
		return (-1);
	else
		return (len + res);
}

int	ft_putchar_len(char c)
{
	return ((int)write(1, &c, 1));
}

int	ft_putchar_add(char c, int len)
{
	return (ft_add_res(len, ft_putchar_len(c)));
}
