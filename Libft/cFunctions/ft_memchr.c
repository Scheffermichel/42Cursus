/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:25:21 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/04 10:47:19 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char ch;
	const char *str;

	str = s;
	ch = (unsigned char) c;
	while (*str && n > 0)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
		n--;	
	}
	return (NULL);
}

int	main(void)
{
	char str[10] = "Michel";
	char c;
	int	n;

	c = 'h';
	n = 4;
	printf("%s\n", (char *)ft_memchr(str, c, n));

}
