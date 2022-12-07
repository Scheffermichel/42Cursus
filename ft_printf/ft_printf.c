/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheffermichel <scheffermichel@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:06:26 by mscheffe          #+#    #+#             */
/*   Updated: 2022/12/07 22:05:15 by scheffermic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_format(va_list arg, const char format)
{
    int len;

    len = 0;

    if (format == 'c')
        

}

int printf(const char *s, ...)
{
    int i;
    va_list arg;
    int len;
    
    i = 0;
    len = 0;
    va_start(arg, s);
    while (s[i])
    {
        if(s[i] == '%')
        {
            i++;
            len += ft_format(arg, s[i]);
        }
        else
        {
            ft_putchar_fd(s[i], 1);
            len++;
        }
        i++;
    }
    va_end(arg);
    return(len);
}
