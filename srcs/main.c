/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlecouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:08:27 by nlecouri          #+#    #+#             */
/*   Updated: 2022/03/29 14:24:07 by nlecouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "map.h"
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int main(void)
{
    char	*buffer = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................";
    t_map		my_map;
    my_map = get_map(buffer);

    write (1, &my_map.empty, 1);
    write (1, "\n", 1);
    write (1, &my_map.obstacle, 1);
    write (1, "\n", 1);
    write (1, &my_map.full, 1);
    write (1, "\n", 1);
    printf("%d\n", my_map.len);
    printf("%d\n", my_map.size);
    return (0);
}
