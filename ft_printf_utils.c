/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:20:25 by mortins-          #+#    #+#             */
/*   Updated: 2022/12/02 14:59:52 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_sort(char c, va_list arg)
{
	char	a;

	if (c == 'c')
	{
		a = va_arg(arg, int);
		return (write(1, &a, 1));
	}
	else if (c == 's')
		return (ft_str(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_ptr(va_arg(arg, unsigned long), 1));
	else if (c == 'd' || c == 'i')
		return (ft_base(va_arg(arg, int), "0123456789"));
	else if (c == 'u')
		return (ft_base(va_arg(arg, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_base(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_base(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (write(1, "%%", 1));
	return (0);
}

int	ft_ptr(unsigned long n, int x)
{
	int	i;

	i = 0;
	if (n == 0)
		return (ft_str("(nil)"));
	if (x)
		i += ft_str("0x");
	if (n >= 16)
		i += ft_ptr((n / 16), 0);
	return (i + write(1, &"0123456789abcdef"[n % 16], 1));
}

int	ft_base(long long n, char *base)
{
	int	i;
	int	a;

	a = 0;
	while (base[a])
		a++;
	i = 0;
	if (n < 0)
	{
		i += write(1, "-", 1);
		n *= -1;
	}
	if (n >= a)
		i += ft_base((n / a), base);
	return (i + write(1, &base[n % a], 1));
}

int	ft_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_str("(null)"));
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}
