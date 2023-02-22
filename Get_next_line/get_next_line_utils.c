#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;
	if (s == NULL)
		return (0);
	while(s[i])
		i++;
	return (i);		
}

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *) s);
		s++;
	}
	if (ch == '\0')
		return ((char *) s);
	else
		return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned int	size;
	unsigned int	i;
	unsigned int	sizes1;

	if(s1 == NULL)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	sizes1 = ft_strlen(s1);
	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (i <= size)
	{
		if (sizes1 > 0)
		{
			str[i] = *s1++;
			sizes1--;
		}
		else
			str[i] = *s2++;
		i++;
	}
	return (str);
}

char	*ft_getremain(char *leftline)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while(leftline[i] && leftline[i] != '\n');
		i++;
	if (!leftline[i])
	{
		free(leftline);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(leftline)- i + 1));
	if (str == NULL)
		return (NULL);
	i++;
	while (leftline[i])
		str[j++] = leftline[i++];
	str[j] = '\0';
	free(leftline);
	return (str); 		
}