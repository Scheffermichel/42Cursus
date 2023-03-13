/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:31:16 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:22:14 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = size - 1;
	srclen = ft_strlen(src);
	if (size)
	{
		while (*src && i)
		{
			*dst++ = *src++;
			i--;
		}
		*dst = '\0';
	}	
	return (srclen);
}
