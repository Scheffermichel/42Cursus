/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:21:41 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/25 23:04:11 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (count);
		while (s[i] != c && s[i])
			i++;
		count++;
	}
}

static char	*ft_takeword(char const *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[j] != c)
		j++;
	word = (char *)malloc((j + 1)
	if(word == NULL)
		return (NULL);
	while(i < j)
	{
		word[i] = s[i];
		i++;
	}
	return (word); 
}

char	**ft_split(char	const *s, char c)
{
	size_t	i;
	size_t	k;
	char	*word
	char	**list;

	i = 0;
	k = ft_wordcount(s, c);
	list = (char **)malloc(sizeof(char *) * (k + 1));
	if (list == NULL)
		return (NULL);
	while (i < k)
	{
		word = ft_takeword(s, c);
		if (word == NULL)
			break ;
		list[i++] = word;	
	}
	list[i] = NULL;
	return (list);
}
