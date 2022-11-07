/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:52:28 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/05 13:10:08 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*aux_dest;
	const char	*aux_src;
	char	temp[n];
	size_t	i;

	i = 0;
	aux_dest = (char *)dest;
	aux_src = (const char *)src;
	while (i < n)
	{
		temp[i] = aux_src[i];
		i++;
	}
	i = 0;
	while (n > 0)
	{
		aux_dest[i] = temp[i];
		i++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char	dest[] = "Joao Costa.";

	printf("String original: %s\n", dest);
	printf("String alterada: %s\n", (char *)ft_memmove(dest + 6, dest+2, 3));
	printf("String alterada original: %s\n", (char *)memmove(dest + 6, dest+2, 3));
	printf("String src: :%s:", dest);
	return (0);
}