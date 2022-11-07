/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:08:54 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/26 14:35:20 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(char *c)
{
	if (*c >= 32 && (unsigned char)*c <= 127)
		return (*c);
	else
		return (0);
}

int	main(void)
{
	char	*c;

	c = " ";

	printf("%d", ft_isprint(c));
}
