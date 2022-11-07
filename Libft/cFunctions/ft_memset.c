/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:36:53 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/04 10:54:11 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;

	p = str;
	while (n > 0)
	{
		*p = (unsigned char) c;
		p++;
		n--;
	}
	return (str);
}

int	main(void)
{
	char	str[100] = "aaabbb";
	
	printf("String original: :%s:\n", str);
	printf("String alterada: %s\n", (char *)ft_memset(str, 'b', 3));
	return (0);
}