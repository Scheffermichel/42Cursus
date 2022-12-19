/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:50:57 by mscheffe          #+#    #+#             */
/*   Updated: 2022/12/17 12:36:56 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
int		ft_format(va_list arg, const char format);
int		ft_hexlen(unsigned int n);
int		ft_putchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_printunsign(unsigned int n);
int		ft_printptr(unsigned long long ptr);
int		ft_printhexa(unsigned int n, const char format);
int		ft_ptrlen(uintptr_t n);
int		ft_takenum(unsigned int n);
int		ft_printpercent(void);
char	*ft_uitoa(unsigned int n);
void	ft_puthex(unsigned int n, const char format);
void	ft_putptr(uintptr_t n);

#endif