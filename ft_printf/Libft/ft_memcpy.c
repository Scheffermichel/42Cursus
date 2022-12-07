/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:56:56 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:17:26 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*aux_dest;
	const char		*aux_src;

	aux_dest = dest;
	aux_src = src;
	if (dest == 0)
		return (NULL);
	while (n)
	{
		*aux_dest = *aux_src;
		aux_dest++;
		aux_src++;
		n--;
	}
	return (dest);
}
