#include "lem_in.h"

int	room_index(t_map *m, char *room_name, int start)
{
	int index;

	index = (start) ? -1 : 0;
	while (m->rooms[++index] && index < m->quant_rooms)
	{
		if (ft_strcmp(m->rooms[index], room_name) == 0)
			return (index);
	}
	return (index);
}
