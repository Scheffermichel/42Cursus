/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:50:16 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/23 22:21:39 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	size;
	unsigned int	i;
	unsigned int	sizes1;

	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	sizes1 = ft_strlen(s1);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (i <= size)
	{
		if (sizes1 > 0)
		{
			str[i] = *s1++;
			sizes1--;
		}
		else
			str[i] = *s2++;
		i++;
	}
	return (str);
}
