/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:52:28 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:17:42 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*aux_dest;
	const char		*aux_src;

	aux_dest = (char *)dest;
	aux_src = (const char *)src;
	if (dest == 0 || src == 0)
		return (NULL);
	if (aux_src < aux_dest)
	{
		aux_dest += n - 1;
		aux_src += n - 1;
		while (n--)
		{
			*aux_dest-- = *aux_src--;
		}
		return (dest);
	}
	else
	{
		while (n--)
		{
			*aux_dest++ = *aux_src++;
		}
		return (dest);
	}
}
