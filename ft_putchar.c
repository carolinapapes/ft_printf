
// putchar fd 1 with return value 
// If write() is interrupted by a signal before it writes any data, it shall return -1 with errno set to [EINTR].
// If write() is interrupted by a signal after it successfully writes some data, it shall return the number of bytes written.
#include "ft_printf.h"
# include <unistd.h>

int	ft_check_res(int len, int res)
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

int	ft_putchar_check(char c, int len)
{
	return (ft_check_res(len, ft_putchar_len(c)));
}