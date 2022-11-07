/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:49:32 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/07 17:39:56 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int sign;
	int res;
	
	res = 0;
	sign = 1;
	while (*nptr == '\f' || *nptr == ' ' || *nptr == '\r' 
		|| *nptr == '\n' || *nptr == '\t' || *nptr == '\v')
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if(*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}	
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (res * sign);
}

int	main(void)
{
	char str[100] = "    		-42699";

	printf("Valor convertido: :%d:\n", ft_atoi(str));
}