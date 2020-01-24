#include "lem_in.h"

static int		is_empty(char *s)
{
	size_t i;

	i = 0;
	while (s[i] && ft_isspace(s[i]))
		i++;
	if (i == ft_strlen(s))
		return (1);
	return (0);
}

static t_map	*map_init_2(t_map *m)
{
	int i;
	int j;

	i = -1;
	m->val_init_2 = 1;
	m->path = (int*)ft_memalloc(sizeof(int) * 1000);
	m->table = (int**)ft_memalloc(sizeof(int*) * m->quant_rooms);
	m->rooms = (char**)ft_memalloc(sizeof(char*) * (m->quant_rooms + 1));
	while (++i < m->quant_rooms)
	{
		m->path[i] = -1;
		m->rooms[i] = NULL;
		m->table[i] = (int*)ft_memalloc(sizeof(int) * m->quant_rooms);
		j = -1;
		while (m->table[i][++j])
			m->table[i][j] = 0;
	}
	m->rooms[i] = NULL;
	m->path[0] = 0;
	return (m);
}

static void		read_map(t_map *m)
{
	char *line;

	while (get_next_line(STDIN_FILENO, &line) > 0)
	{
		if (m->quant_ants == 0)
			count_all_ants(m, line);
		else if (ft_strchr(line, '-') || m->val_started == 3)
			links(m, line);
		else if ((m->val_started == 1 || m->val_started == 2) && !is_empty(line))
			rooms(m, line);
		else
			exit_func(m, 1);
	}
	if (!m->quant_ants || !m->links[0])
		exit_func(m, 1);
	m = map_init_2(m);
}

static t_map	*map_init(void)
{
	t_map *m;

	m = (t_map*)ft_memalloc(sizeof(t_map));
	m->links = ft_strnew(1);
	m->ants_str = ft_strnew(1);
	m->rooms_list = ft_strnew(1);
	m->quant_rooms = 0;
	m->quant_ants = 0;
	m->val_started = 0;
	m->curr_room = 0;
	m->path_ind = 0;
	m->val_init_2 = 0;
	m->val_good[0] = 0;
	m->val_good[1] = 0;
	m->rooms = NULL;
	m->table = NULL;
	m->path = NULL;
	return (m);
}

int				main(void)
{
	t_map *m;

	m = map_init();
	read_map(m);
	add_rooms(m);
	if (!m->val_good[0] || !m->val_good[1])
		exit_func(m, 1);
	create_table(m);
	print_system(m);
	if (solution(m, 0))
		result(m);
	else
		exit_func(m, 1);
	exit_func(m, 0);
}
