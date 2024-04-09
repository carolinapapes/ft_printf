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

// putchar fd 1 with return value 
// If write() is interrupted by a signal before it writes any data, it shall return -1 with errno set to [EINTR].
// If write() is interrupted by a signal after it successfully writes some data, it shall return the number of bytes written.