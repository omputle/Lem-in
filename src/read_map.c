#include "../lemin.h"

void	read_map(t_map *m)
{
	char	*line;
	while (get_next_line(STDIN_FILENO, &line) > 0)
	{
		if (ft_strlen(m->ants) == 0)
			get_ants(m, line);
		else if (ft_strchr(line, '-') || m->check == 3)
			get_links(m, line);
		else if ((m->check == 1 || m->check == 2) && line)
			get_rooms(m, line);
		else
			exit_program(m);
		ft_putendl(line);
		ft_strdel(&line);
	}
}
