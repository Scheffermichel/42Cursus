/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:35:59 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/26 19:50:03 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*sub;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (len > (ft_strlen(s)))
		len = (ft_strlen(s));
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if ((unsigned int)(ft_strlen(s)) > start)
	{	
		while (s[start] && j < len)
		{
			sub[j] = s[start];
			j++;
			start++;
		}
	}	
	sub[j] = '\0';
	return (sub);
}
