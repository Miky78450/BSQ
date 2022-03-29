/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:33:38 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 14:56:44 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
#include <stdio.h>

t_map	struct_map_len(char *buffer, t_map my_map)
{
	int j;
	int	l_size;

	l_size = 0;
	j = 0;
	while (buffer[j] != '\n')
        	j++;
	j++;
	while (buffer[j] != '\n')
	{
        	l_size += 1;
        	j++;
	}
	my_map.map_len = l_size;
	return (my_map);
}

t_map	struct_nb_ligne(char *buffer, t_map my_map)
{
	int	j;
	int	nb_ligne;

	j = 0;
	nb_ligne = 0;
	while (buffer[j])
	{
		if (buffer[j] == '\n')
			nb_ligne++;
		j++;
	}
	my_map.map_size = nb_ligne;
	return (my_map);
}

t_map	struct_carr_ligne_full(char *buffer, t_map my_map)
{
	int	j;
	
	j = 0;
	while (buffer[j] != '\n')
		j++;
	my_map.full = buffer[j - 1];
	return (my_map);
}

t_map	struct_carr_ligne_empty(char *buffer, t_map my_map)
{
	int	j;
	
	j = 0;
	while (buffer[j] != '\n')
		j++;
	my_map.empty = buffer[j - 3];
	return (my_map);
}

t_map	struct_carr_ligne_obstacle(char *buffer, t_map my_map)
{
	int	j;
	
	j = 0;
	while (buffer[j] != '\n')
		j++;
	my_map.obstacle = buffer[j - 2];
	return (my_map);
}

