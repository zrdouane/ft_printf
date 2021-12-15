/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.H                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:14:05 by zrdouane          #+#    #+#             */
/*   Updated: 2021/12/13 18:14:07 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	va_printf(const char *str, va_list args, int i, int *len);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_put_adress(unsigned long n, const char *base, int *len);
void	ft_puthex(unsigned int n, const char *base, int *len);
void	ft_putnbr_u(unsigned int n, int *len);
void	ft_putnbr(int c, int *len);

#endif
