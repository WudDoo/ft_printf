/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:23:13 by mortins-          #+#    #+#             */
/*   Updated: 2022/12/02 14:56:43 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, s);
	i = 0;
	while (*s)
	{
		if (*s != '%')
			i += write(1, &*s, 1);
		else
			i += ft_sort(*++s, arg);
		s++;
	}
	va_end(arg);
	return (i);
}
