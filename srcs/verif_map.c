/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:04:10 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 11:56:55 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int	ft_str_len(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	return (i);
}

char	*ft_strcpy(char *buffer, int i)
{
	char	*dest;
	int		j;

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

/*char	*ft_strcpy2 (char *buffer, int i)permet de recuperer les 3 carracteres utile
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
	int		i;
	char	*nbr_ligne;
	int		nbrs_ligne;

	i = 0;
	i = ft_str_len(buffer);
	nbr_ligne = malloc(sizeof(char) * (i - 3));
	if (!nbr_ligne)
		return (0);
	nbr_ligne = ft_strcpy(buffer, i);
	nbrs_ligne = ft_atoi(nbr_ligne);
	i = i - 1;
	if (ft_ligne(buffer) == 0)
		return (0);
	if (carr_ligne(buffer, i) == 0)
		return (0);
	if (db_carr(buffer, i) == 0)
		return (0);
	if (nb_ligne(buffer, nbrs_ligne) == 0)
		return (0);
	return (1);
}

/*int	main(void)
{
	char	*buffer = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................";
	if (verif_map(buffer) == 0)
		write (1, "map error\n", 10);
	else
		write (1, "la map est bonne\n", 18);
	return (0);
}*/
