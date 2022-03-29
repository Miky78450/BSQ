/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:04:10 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/28 18:43:44 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_str_len (char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	return (i);
	
}

char	*ft_strcpy (char *buffer, int i)
{
	char	*dest;
	int	j;
	
	dest = malloc(sizeof(buffer));
	if (dest == NULL)
		return (NULL);
	j = 0;
	while (j <= i - 3)
	{
		dest[j] = buffer[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*char	*ft_strcpy2 (char *buffer, int i)
{
	char	*dest;
	int	j;
	int	k;
	int	l;

	j = i - 3;
	k = i;
	l = 0;
	while (j <= k)
	{
		dest[l] = buffer[i];
		i--;
		j++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}*/

int	ft_atoi(char *str)
{
	int	neg;
	int	i;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}

int	verif_map(char *buffer)
{
	int	i;
	int	j;
	char	*nbr_ligne;
	int	nbrs_ligne;
	int	nb_ligne;
	int	l_size;
	int	l2_size;

	l_size = 0;
	l2_size = 0;
	i = 0;
	i = ft_str_len(buffer);
	nbr_ligne = malloc(sizeof(char) * (i - 3));
	if (!nbr_ligne)
		return (0);
	nbr_ligne = ft_strcpy(buffer, i);
	nbrs_ligne = ft_atoi(nbr_ligne);
	i = i - 1;
	j = 0;
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
	j = 0;
	while (buffer[j] != '\n')
		j++;
	j++;
	while (buffer[j])
	{
		if (buffer[j] == '\n')
			j++;
		if (buffer[j] != buffer[i - 1] && buffer[j] != buffer[i - 2])
			return (0);
		j++;
	}
	if (buffer[i] == buffer[i - 1])
		return (0);
	else if (buffer[i] == buffer[i - 2])
		return (0);
	else if (buffer[i - 1] == buffer [i - 2])
		return (0);
	j = 0;
	nb_ligne = 0;
	while (buffer[j])
	{
		if (buffer[j] == '\n')
			nb_ligne++;
		j++;
	}
	if (nb_ligne != nbrs_ligne)
		return (0);
	return(1);
}

int	main(void)
{
	char	*buffer = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................";
	if (verif_map(buffer) == 0)
		write (1, "map error\n", 10);
	else
		write (1, "la map est bonne\n", 18);
	return (0);
}	
