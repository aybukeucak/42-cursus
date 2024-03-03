/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayucak <ayucak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:37:49 by ayucak            #+#    #+#             */
/*   Updated: 2023/09/06 15:28:32 by ayucak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <unistd.h>

static char	*ft_copy_to_stash(char *stash, char *buf)
{
	char	*new;

	new = 0;
	if (!stash && buf)
	{
		new = ft_strdup(buf);
		if (!new)
			return (NULL);
		return (new);
	}
	new = ft_strjoin(stash, buf);
	ft_free_stash(&stash, 0);
	return (new);
}

static int	ft_have_nl(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = -1;
	while (s[++i] != '\0')
		if (s[i] == '\n')
			return (1);
	return (0);
}

static char	*ft_extract_line(char *stash)
{
	char	*line;
	size_t	i;
	size_t	j;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (ft_free_stash(&line, 0));
	j = 0;
	while (j <= i)
	{
		line[j] = stash[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

static char	*ft_recreate_stash(char *stash)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] != '\n')
		i++;
	if (stash[i + 1] == '\0')
		return (ft_free_stash(&stash, 0));
	new = ft_substr(stash, i + 1, ft_strlen(stash));
	ft_free_stash(&stash, 0);
	if (!new)
		return (NULL);
	return (new);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	long		bytes_read;
	static char	*stash[4096];
	char		*line;

	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (ft_free_stash(&stash[fd], 0));
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if ((bytes_read <= 0 && !stash[fd]) || bytes_read == -1)
			return (ft_free_stash(&stash[fd], 0));
		buf[bytes_read] = '\0';
		stash[fd] = ft_copy_to_stash(stash[fd], buf);
		if (ft_have_nl(stash[fd]))
		{
			line = ft_extract_line(stash[fd]);
			if (!line)
				return (ft_free_stash(&stash[fd], 0));
			return (stash[fd] = ft_recreate_stash(stash[fd]), line);
		}
	}
	return (ft_free_stash(&stash[fd], 1));
}
