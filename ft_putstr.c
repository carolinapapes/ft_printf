// putstr fd 1 with return value 
// If write() is interrupted by a signal before it writes any data, it shall return -1 with errno set to [EINTR].
// If write() is interrupted by a signal after it successfully writes some data, it shall return the number of bytes written.
// if s is null writes "(null)"
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
