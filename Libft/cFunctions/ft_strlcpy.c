/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:31:16 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/31 18:51:16 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	j = size - 1;
	dest = dst;
	while (j > 0)
	{
		dest[i] = src[i];
		i++;
		j--;
	}
	dest[i] = '\0';

	while (src[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	source[10] = "Michel";
	char	dest[10];

	size_t	num = 3;

	printf("Tamanho da string: :%ld:\n", ft_strlcpy(dest, source, num));
	return (0);
}