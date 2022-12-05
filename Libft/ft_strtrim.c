/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:01:50 by mscheffe          #+#    #+#             */
/*   Updated: 2022/12/05 11:43:51 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
	{
		if (start++ > end)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[end]) != NULL)
	{
		if (end-- <= start)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, start, end + 1 - start));
}
