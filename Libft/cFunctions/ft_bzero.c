/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:34:12 by mscheffe          #+#    #+#             */
/*   Updated: 2022/10/28 11:52:57 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;

	while (n > 0 && p)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (s);
}

int	main(void)
{
	char	str[80] = "12345";
	
	printf("String original: :%s:\n", str);
	printf("String zerada: :%s:\n", (char *)ft_bzero(str, 5));
	return (0);
}