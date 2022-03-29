/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_carr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:40:12 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 10:06:36 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	db_carr(char *buffer, int i)
{
	if (buffer[i] == buffer[i - 1])
		return (0);
	else if (buffer[i] == buffer[i - 2])
		return (0);
	else if (buffer[i - 1] == buffer [i - 2])
		return (0);
	return (1);
}
