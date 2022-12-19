/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:06:26 by mscheffe          #+#    #+#             */
/*   Updated: 2022/12/17 12:37:47 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_printstr(va_arg(arg, char *));
	else if (format == 'p')
		len += ft_printptr(va_arg(arg, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_printunsign(va_arg(arg, unsigned int));
	else if (format == 'X' || format == 'x')
		len += ft_printhexa(va_arg(arg, unsigned int), format);
	else if (format == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{	
			i++;
			len += ft_format(arg, s[i]);
		}	
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
