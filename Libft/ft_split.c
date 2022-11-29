/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:21:41 by mscheffe          #+#    #+#             */
/*   Updated: 2022/11/26 19:43:09 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
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
			break ;
		while (s[i] != c && s[i])
			i++;
		count++;
	}
	return (count);
}

static char	*ft_takeword(const char *s, int *j, char c)
{
	int		i;
	char	*word;

	while (s[*j] == c)
		if (s[(*j)++] == '\0')
			return (NULL);
	i = 0;
	while (s[*j + i] != c && s[*j + i])
		i++;
	if (i != 0)
	{
		word = (char *)malloc(sizeof(char) * (i + 1));
		if (word == NULL)
			return (NULL);
		i = 0;
		while (s[*j] != c && s[*j])
			word[i++] = s[(*j)++];
		word[i] = '\0';
	}
	else
		return (NULL);
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		k;
	int		*j;
	char	*word;
	char	**list;

	list = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (list == NULL)
		return (NULL);
	i = 0;
	j = &i;
	k = 0;
	while (k < ft_wordcount(s, c))
	{
		word = ft_takeword(s, j, c);
		if (word == NULL)
			break ;
		list[k++] = word;
	}
	list[k] = NULL;
	return (list);
}
