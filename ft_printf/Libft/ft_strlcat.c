/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:07:35 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:21:55 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dst) + ft_strlen(src);
	if (ft_strlen(dst) < size)
	{
		size = size - ft_strlen(dst) - 1;
		dst = dst + ft_strlen(dst);
		while (*src && size)
		{	
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
		return (i);
	}
	else
		return (ft_strlen(src) + size);
}
