#ifndef LEMIN_H
# define LEMIN_H

# include "get_next_line/get_next_line.h"
# include "libft/libft.h"

typedef	struct	s_map
{
	char	*rooms;
	char	*ants;
	char	*links;
	int		check;
	int		num_ants;
	int 	num_rooms;
	int 	*rooms_array;
	int 	**adj_mat;
	char	*start;
	char	*end;
	char	**paths;
	char	*path_order;
}		t_map;



t_map		*map_init(void);

void	read_map(t_map *m);
void get_ants(t_map *m, char *line);
void  get_rooms(t_map *m, char *line);
void  get_links(t_map *m, char *line);

void find_paths(t_map *m);
void  adjacency_matrix(t_map *m);
int find_room(t_map *m, int room);

void   del_array_arrays(char **arr);
char  *append_string(char *s1, char *s2);
void  exit_program(t_map *m);
#endif