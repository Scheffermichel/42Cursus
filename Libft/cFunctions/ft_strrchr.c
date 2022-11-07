/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:28:50 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/02 11:29:24 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{	
	const char *ptr;
	char	ch;

	ch = (char) c;
	while (*s)
	{
		if (*s == ch)
			ptr = s;
		s++;	 
	}
	if (ch == '\0')
		return ((char *) s);
	if (ch)
		return ((char *) ptr);	
	else
		return (NULL);
}

int main(void)
{
	char str[100] = "MichelScheffer";
	char c;

	c = 'c';
	printf(":%s:", ft_strrchr(str, c));
}
