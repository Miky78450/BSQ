/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:57:09 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/30 13:27:02 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_strlen (char *buffer)
{
	int	i;
	
	i = 0;
	while (buffer[i])
		i++;
	return (i);
}

int	ft_buffer(char *file)
{
	char	*buffer;
	char	buf;
	int		ret;

	buffer = (char*)malloc(sizeof(char) * 4096);
	if (buffer == NULL)
		return (-1);
	ret = open(file, O_RDONLY);
	while (read(ret, &buf, 1) > 0)
	{
		buffer = &buf;
		buffer[ret] = '\0';

	}
	if (buffer == NULL)
		return (-1);
	free(buffer);
	return (1);
}


int main(void)
{
    printf("%d", ft_buffer("map.dict"));
}
