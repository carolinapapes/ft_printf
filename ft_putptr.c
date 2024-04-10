/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:09:27 by capapes           #+#    #+#             */
/*   Updated: 2024/04/10 21:09:38 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_len(unsigned long ptr)
{
	int	len;

	len = ft_putstr_len("0x");
	len = ft_putnbr_base_add(ptr, "0123456789abcdef", len);
	return (len);
}
