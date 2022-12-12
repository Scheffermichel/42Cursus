/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 12:43:26 by mscheffe          #+#    #+#             */
/*   Updated: 2022/12/12 14:25:23 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_takenum(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_takenum(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	ft_printunsign(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_uitoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
