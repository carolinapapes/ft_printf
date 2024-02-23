#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_check_res(int len, int res);

size_t	ft_strlen(const char *s);

int	ft_putchar_len(char c);
int	ft_putchar_check(char c, int len);

int	ft_putstr_len(const char *s);
int	ft_putstr_check(const char *s, int len);

int	ft_putnbr_base(unsigned long int n, char *base, int neg);
int	ft_putnbr_base_check(unsigned long int n, char *base, int len);

int	ft_putnbr_base_int(int n);
int	ft_putptr_len(unsigned long ptr);

int	ft_printf(const char *s, ...);

#endif