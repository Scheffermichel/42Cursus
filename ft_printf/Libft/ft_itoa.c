/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:34:03 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/26 19:47:55 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_takenum(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_takenum(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
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
