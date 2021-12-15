/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:13:59 by zrdouane          #+#    #+#             */
/*   Updated: 2021/12/13 18:14:01 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
#include <stdarg.h>

void	va_printf(const char *str, va_list args, int i, int *len)
{
	i++;
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int), len);
	if (str[i] == '%')
		ft_putchar('%', len);
	if (str[i] == 's')
		ft_putstr(va_arg(args, char *), len);
	if (str[i] == 'i' || str[i] == 'd')
		ft_putnbr(va_arg(args, int), len);
	if (str[i] == 'x')
		ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", len);
	if (str[i] == 'X')
		ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	if (str[i] == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	if (str[i] == 'p')
	{
		ft_putstr("0x", len);
		ft_put_adress(va_arg(args, unsigned long), "0123456789abcdef", len);
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	strptr;

	i = 0;
	len = 0;
	va_start(strptr, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i], &len);
		else
		{
			va_printf(str, strptr, i, &len);
			i++;
		}
		i++;
	}
	va_end(strptr);
	return (len);
}
