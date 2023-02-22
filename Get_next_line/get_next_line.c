/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheffe <mscheffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:57:55 by mscheffe          #+#    #+#             */
/*   Updated: 2023/02/22 18:35:56 by mscheffe         ###   ########.fr       */
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
	if (buff == NULL)
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

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	leftline = ft_read_leftline(fd, leftline);
	if (!leftline)
		return (NULL);
	line = ft_getline(leftline);
	leftline = ft_getremain(leftline);
	return (line);
}

/*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;

	fd1 = open("tests/test.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	return (0);
}*/
