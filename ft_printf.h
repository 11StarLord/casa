#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_type_specifier(const char format, va_list ap);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int n, int c);
int	ft_putunsigned(unsigned int n);
int	ft_putpointer(unsigned long long ptr);
int	ft_putnbr(int n);

#endif
