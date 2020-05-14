#include "../lemin.h"

void  exit_program(t_map *m)
{
  ft_strdel(&(m->ants));
  ft_strdel(&(m->rooms));
  ft_strdel(&(m->links));
  ft_strdel(&(m->start));
  ft_strdel(&(m->end));
  free(m);
  m = NULL;
  exit(0);
}
