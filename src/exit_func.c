#include "lem_in.h"

void	exit_func(t_map *m, int error)
{
	int i;

	free(m->links);
	free(m->ants_str);
	free(m->rooms_list);
	if (m->val_init_2)
	{
		free(m->path);
		free_array(m->rooms, m, 0);
		i = -1;
		while (++i < m->quant_rooms)
			free(m->table[i]);
		free(m->table);
	}
	free(m);
	if (error)
	{
		ft_putstr_fd("ERROR\n", 2);
		exit(1);
	}
	exit(0);
}
