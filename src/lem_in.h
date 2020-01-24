/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:53:58 by mduma             #+#    #+#             */
/*   Updated: 2020/01/24 09:16:08 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "../libft/libft.h"
# include "../Gnl/get_next_line.h"
# include <limits.h>
# include <stdio.h>

typedef struct	s_map
{
	char		**rooms;
	char		*rooms_list;
	char		*ants_str;
	char		*links;
	int			quant_rooms;
	int			quant_ants;
	int			val_started;
	int			curr_room;
	int			path_ind;
	int			*path;
	int			**table;
	int			val_good[2];
	int			new_line;
	int			val_init_2;
}				t_map;

void			count_all_ants(t_map *m, char *line);
void			rooms(t_map *m, char *line);
void			links(t_map *m, char *line);

void			add_rooms(t_map *m);
void			create_table(t_map *m);
int				solution(t_map *m, int i);

char			*join_str(char *s1, char *s2, int clean);
void			free_array(char **array, t_map *m, int error);
int				room_index(t_map *m, char *room_name, int start);

void			result(t_map *m);
void			print_system(t_map *m);
void			exit_func(t_map *m, int error);

#endif
