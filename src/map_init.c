#include "../lemin.h"

t_map		*map_init(void)
{
  t_map   *m;

  m = (t_map*)malloc(sizeof(t_map));
  m->ants = ft_strnew(0);
  m->rooms = ft_strnew(0);
  m->links = ft_strnew(0);
  // m->start = ft_strnew(0);
  // m->end = ft_strnew(0);
  m->check = 0;
  m->num_ants = 0;
  m->num_rooms = 0;
}
