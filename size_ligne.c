/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_ligne.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:29:00 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 10:19:12 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	size_ligne(char *buffer, int l_size, int l2_size, int j)
{
	while (buffer[j] != '\n')
		j++;
	j++;
	while (buffer[j] != '\n')
	{
		l_size += 1;
		j++;
	}
	j++;
	while (buffer[j] != '\0')
	{
		if (buffer[j] == '\n')
		{
			if (l2_size != l_size)
				return (0);
			l2_size = -1;
		}
		j++;
		l2_size += 1;
	}
	if (l2_size != l_size)
		return (0);
	return (1);
}

int	ft_ligne(char *buffer)
{
	int	j;
	int	l_size;
	int	l2_size;

	j = 0;
	l_size = 0;
	l2_size = 0;
	if (size_ligne(buffer, l_size, l2_size, j) == 0)
		return (0);
	return (1);
}
