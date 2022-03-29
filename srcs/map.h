/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:51:59 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 12:43:48 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MAP_h
# define MAP_H

typedef	struct s_map t;
struct s_map
{
	char	empty;
	char	obstacle;
	char	full;
	int		map_size;
	int		map_len;
};

#endif
