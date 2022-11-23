/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:49:36 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:17:20 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;

	str1 = s1;
	str2 = s2;
	while (n)
	{
		if (*str1 != *str2)
			return ((*str1) - (*str2));
		str1++;
		str2++;
		n--;
	}
	return (0);
}
