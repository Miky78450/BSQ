#ifndef MAIN_H
# define MAIN_H

typedef struct s_map t_map;
struct s_map
{
	char	empty;
	char	obstacle;
	char	full;
	int		map_size;
	int		map_len;
};

int	ft_ligne(char *buffer);
int	carr_ligne(char *buffer, int i);
int	db_carr(char *buffer, int i);
int	nb_ligne(char *buffer, int nbrs_ligne);
t_map	struct_map_len(char *buffer, t_map my_map);
t_map	struct_nb_ligne(char *buffer, t_map my_map);
t_map	struct_carr_ligne_full(char *buffer, t_map my_map);
t_map	struct_carr_ligne_obstacle(char *buffer, t_map my_map);
t_map	struct_carr_ligne_empty(char *buffer, t_map my_map);

#endif
