/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:28:50 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/20 13:27:16 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{	
	const char	*ptr;
	char		ch;

	ptr = NULL;
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			ptr = s;
		s++;
	}
	if (ch == '\0')
		return ((char *) s);
	else
		return ((char *) ptr);
}
