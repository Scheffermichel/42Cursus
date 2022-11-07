/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:07:35 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/31 18:58:56 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t k;
	char	*dest;
	const char	*source;

	i = 0;
	k = 0;
	dest = dst;
	source = src;
	while (*dest)
	{
		dest++;
		i++;
	}
	
	while (*source && size > 0)
	{
		*dest = *source;
		dest++;
		source++;
		size--;
		k++;
	}
	*dest = '\0';
	while (*source)
	{
		k++;
		source++;
	}
	return (i + k);
}

int main(void)
{
	char dest[10] = "Michel";
	char source[10] = "Scheffer";
	size_t num = 1;
	
	printf("Resultado: :%s:\n", ft_strlcat(dest, source, num));
	return (0);
}