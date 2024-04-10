/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capapes <capapes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:09:12 by capapes           #+#    #+#             */
/*   Updated: 2024/04/10 21:09:14 by capapes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_add(unsigned long int n, char *base, int len)
{
	if (len < 0)
		return (len);
	return (ft_add_res(len, ft_putnbr_base(n, base, 0)));
}

int	ft_putnbr_base_int(int n)
{
	unsigned long	j;

	if (n < 0)
		j = (unsigned long)(((long)n) * -1);
	else
		j = (unsigned long)n;
	return (ft_putnbr_base(j, "0123456789", n < 0));
}

int	ft_putnbr_base(unsigned long int n, char *base, int neg)
{
	int					len;
	unsigned long int	d;

	len = 0;
	d = ft_strlen(base);
	if (neg)
		len = ft_putchar_add('-', len);
	if (n >= d)
	{
		len = ft_putnbr_base_add(n / d, base, len);
		len = ft_putnbr_base_add(n % d, base, len);
	}
	else
		len = ft_putchar_add(base[n], len);
	return (len);
}

// int	ft_putnbr_base(unsigned long int n, char *base, int neg)
// {
// 	int					len;
// 	int					res;
// 	unsigned long int	d;

// 	len = 0;
// 	d = ft_strlen(base);
// 	if (neg && ++len)
// 		if (write (1, "-", 1) == -1)
// 			return (-1);
// 	if (n >= d)
// 	{
// 		res = ft_putnbr_base(n / d, base, 0);
// 		if (res == -1)
// 			return (-1);
// 		len += res;
// 		res = ft_putnbr_base(n % d, base, 0);
// 		if (res == -1)
// 			return (-1);
// 		len += res;
// 	}
// 	else if (++len)
// 		if (ft_putchar_fd_len(base[n]) == -1)
// 			return (-1);
// 	return (len);
// }