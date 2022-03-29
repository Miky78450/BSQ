/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carr_ligne.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:34:41 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 09:37:16 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	carr_ligne(char *buffer, int i)
{
	int	j;

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
	return (1);
}
