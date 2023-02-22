/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:55:25 by mscheffe          #+#    #+#             */
/*   Updated: 2023/02/22 18:35:48 by mscheffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (0);
}

char	*ft_strjoin(char *leftline, char *buff)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!leftline)
	{
		leftline = (char *)malloc(1 * sizeof(char));
		leftline[0] = '\0';
	}
	if (!leftline || !buff)
		return (NULL);
	i = -1;
	j = 0;
	str = (char *)malloc(ft_strlen(leftline) + ft_strlen(buff) + 1);
	if (str == NULL)
		return (NULL);
	if (leftline)
		while (leftline[++i] != '\0')
			str[i] = leftline[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(leftline) + ft_strlen(buff)] = '\0';
	free(leftline);
	return (str);
}

char	*ft_getline(char *leftline)
{
	int		i;
	char	*str;

	i = 0;
	if (!leftline[i])
		return (NULL);
	while (leftline[i] && (leftline[i] != '\n'))
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (str == NULL)
		return (NULL);
	while (leftline[i] && (leftline[i] != '\n'))
	{
		str[i] = leftline[i];
		i++;
	}
	if (leftline[i] == '\n')
	{
		str[i] = leftline[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_getremain(char *leftline)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (leftline[i] && leftline[i] != '\n')
		i++;
	if (!leftline[i])
	{
		free(leftline);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(leftline) - i + 1));
	if (str == NULL)
		return (NULL);
	i++;
	while (leftline[i])
		str[j++] = leftline[i++];
	str[j] = '\0';
	free(leftline);
	return (str);
}
