// if s is null writes "(null)"
#include "ft_printf.h"
int	ft_putptr_len(unsigned long ptr)
{
	int	len;

	len = ft_putstr_len("0x");
	len = ft_putnbr_base_add(ptr, "0123456789abcdef", len);
	return (len);
}