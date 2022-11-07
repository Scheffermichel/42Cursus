/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:51:11 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/04 14:17:03 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    const char *bi;
	const char *li;

	bi = big;
	if (*little)
	{
		while (*big != '\0' && len > 0)
		{
			li = little;
			while (*bi == *li && len > 0)
			{
				bi++;
				li++;
				len--;
			}
			if(*li == '\0')
				return ((char *)big);
			bi++;
			big++;
			len--;
		}
		return (NULL);
	}
	return ((char *)big);
	
}

int main()
{
	char	b[20] = "Foo Bar Baz";
	char	l[20] = "";
	int	n;

	n = 7;

	printf("String: :%s:\n", ft_strnstr(b, l, n));

}