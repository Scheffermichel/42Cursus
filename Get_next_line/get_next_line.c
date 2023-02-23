/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheffermichel <scheffermichel@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:57:55 by mscheffe          #+#    #+#             */
/*   Updated: 2023/02/23 22:39:37 by scheffermic      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char	*ft_read_leftline(int fd, char *leftline)
{
	char	*buff;
	int		bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(leftline, '\n') && bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		leftline = ft_strjoin(leftline, buff);
	}
	free(buff);
	return (leftline);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*leftline;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	leftline = ft_read_leftline(fd, leftline);
	if (!leftline)
		return (NULL);
	line = ft_getline(leftline);
	leftline = ft_getremain(leftline);
	return (line);
}

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("test/test2.txt", O_RDONLY);
	i = 1;
	while (i < 9)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s\n", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}