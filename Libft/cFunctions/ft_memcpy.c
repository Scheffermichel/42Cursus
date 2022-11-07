/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:56:56 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/28 15:05:34 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*aux_dest;
	const char	*aux_src;

	aux_dest = dest;
	aux_src = src;
	while (n > 0)
	{
		*aux_dest = *aux_src;
		aux_dest++;
		aux_src++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char	dest[] = "abcde";

	printf("String original: %s\n", dest);
	printf("String alterada: %s\n", (char *)ft_memcpy(dest + 2, dest, 3));
	printf("String src: :%s:", dest);
	return (0);
}