/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:17:04 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/02 10:35:24 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char ch;

	ch = (char) c; 
	while (*s)
	{
		if (*s == ch)
			return ((char *) s);
		s++;	
	}
	if(ch == '\0')
		return ((char *) s);
	else
		return (NULL);	

}

int main(void)
{
	char str[10] = "Michel";
	char c;

	c = '\0';
	printf(":%s:\n", ft_strchr(str, c));

}