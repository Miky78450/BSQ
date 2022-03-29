/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_ligne.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:43:24 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 09:46:51 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_ligne(char *buffer, int nbrs_ligne)
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
	if (nb_ligne != nbrs_ligne)
		return (0);
	return (1);
}
