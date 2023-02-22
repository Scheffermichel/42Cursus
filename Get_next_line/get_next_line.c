#include "get_next_line.h"
#include <unistd.h>

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
		if (read == -1)
		{
			free(buff);
			return NULL;
		}
		buff[bytes] = '\0';
		leftline = strjoin(leftline, buff);
	}
	free(buff);
	return (leftline);
}

char	*ft_getline(char *leftline)
{
	int		i;
	char	*str;

	i = 0;
	if (leftline[i] == NULL)
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



