/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:21:24 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/26 12:57:43 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isdigit(char *c)
{
	if (*c >= '0' && *c <= '9' )
		return (*c);
	else
		return (0);
}

int	main(void)
{
	char	*c;

	c = "0";

	printf("%c", ft_isdigit(c));
	return (0);
}
