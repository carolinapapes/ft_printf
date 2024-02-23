#include "ft_printf.h"

static unsigned long	ft_convertarg(va_list *args)
{
	return ((unsigned long)va_arg(args[0], unsigned int));
}

static int	ft_putformat(char format, va_list *args)
{
	if (format == '%')
		return (ft_putchar_len('%'));
	if (format == 'c')
		return (ft_putchar_len(va_arg(args[0], int)));
	if (format == 's')
		return (ft_putstr_len(va_arg(args[0], char *)));
	if (format == 'd' || format == 'i')
		return (ft_putnbr_base_int((va_arg(args[0], long))));
	if (format == 'u')
		return (ft_putnbr_base(ft_convertarg(args), "0123456789", 0));
	if (format == 'X')
		return (ft_putnbr_base(ft_convertarg(args), "0123456789ABCDEF", 0));
	if (format == 'x')
		return (ft_putnbr_base(ft_convertarg(args), "0123456789abcdef", 0));
	if (format == 'p')
		return (ft_putptr_len(va_arg(args[0], unsigned long)));
	return (0);
}
int ft_putformat_check(char format, va_list *args, int len)
{
	return (ft_check_res(len, ft_putformat(format, args)));
}

int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	va_list	args;

	if (!s)
		return (-1);
	i = -1;
	len = 0;
	va_start(args, s);
	while (++i >= 0 && s[i])
	{
		if (s[i] != '%')
			len = ft_putchar_check(s[i], len);
		else
			len = ft_putformat_check(s[++i], &args, len);
		if (len == -1)
			return (len);
	}
	va_end(args);
	return (len);
}
