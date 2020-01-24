#include "lem_in.h"

static void	is_number(char **r, t_map *m, char *s)
{
	int i;

	i = 0;
	if (s[0] == '-' || ft_isdigit(s[0]))
	{
		while (s[++i])
		{
			if (!ft_isdigit(s[i]))
				free_array(r, m, 1);
		}
	}
	else
		free_array(r, m, 1);
}

static void	validate_room(t_map *m, char *line)
{
	char **route;

	route = ft_strsplit(line, ' ');
	if (route[0][0] == 'L' || route[3] != NULL)
		free_array(route, m, 1);
	is_number(route, m, route[1]);
	is_number(route, m, route[2]);
	free_array(route, m, 0);
}

void		rooms(t_map *m, char *line)
{
	m->val_started = 2;
	m->rooms_list = join_str(m->rooms_list, line, 0);
	if (line[0] == '#')
		return ;
	validate_room(m, line);
	m->quant_rooms++;
}
