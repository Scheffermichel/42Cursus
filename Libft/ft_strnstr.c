/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:51:11 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:24:11 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	sizeli;

	sizeli = ft_strlen(little);
	if (sizeli == 0)
		return ((char *)big);
	while (*big != '\0' && len >= sizeli)
	{
		if (!ft_memcmp(big, little, sizeli))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
