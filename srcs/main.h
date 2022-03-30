#ifndef MAIN_H
# define MAIN_H

typedef struct s_map t_map;
struct s_map
{
	char	empty;
	char	obstacle;
	char	full;
	int		size;
	int		len;
};

int	ft_ligne(char *buffer);
int	carr_ligne(char *buffer, int i);
int	db_carr(char *buffer, int i);
int	nb_ligne(char *buffer, int nbrs_ligne);
t_map	get_map(char *buffer);

#endif
