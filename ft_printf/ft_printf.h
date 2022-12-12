/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:50:57 by mscheffe          #+#    #+#             */
/*   Updated: 2022/12/12 12:08:47 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int	ft_putchar(int c);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printunsign(unsigned int n);

#endif