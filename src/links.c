#include "lem_in.h"

void	links(t_map *m, char *line)
{
	if (m->val_started == 2)
	{
		m->val_started = 3;
	}
	if (m->val_started != 3)
	{
		free(line);
		exit_func(m, 1);
	}
	m->links = join_str(m->links, line, 0);
	if (line)
		free(line);
}
