/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:57:09 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/28 12:22:44 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	*ft_buffer(char *file, char *buffer, int i)
{
	int	fd;
	int	ret;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, buffer, i);
	buffer[i] = '\0';
	close(fd);
	return (buffer);
}

char	*convert_file(char *file)
{
	int		fd;
	char	buf;
	int		i;
	char	*buffer;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, &buf, 1) > 0)
		i++;
	buffer = (char *)malloc(sizeof(char) * i + 1);
	if (!buffer)
		return (NULL);
	close(fd);
	return (ft_buffer(file, buffer, i));
}

/*int main(void)
{
    printf("%s", convert_file("numbers.dict"));
}*/
