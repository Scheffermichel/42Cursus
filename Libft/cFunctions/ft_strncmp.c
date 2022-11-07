/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:30:08 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/02 14:24:11 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		n--;	
	}
	if(n == 0)
		return (0);
	else	
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int main()
{
	char 	*str1;
	char 	*str2;

	str1 = "Michel";
	str2 = "3486";

	printf("Comparing: %d\n", ft_strncmp(str1, str2, 3));
}