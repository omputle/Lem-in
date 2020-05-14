#include "lemin.h"

int  main(void)
{
  t_map *m;
  ft_putendl("structs init");
  m = map_init();
  ft_putendl("read map");
  read_map(m);
  ft_putendl("finding paths");
  find_paths(m);
  ft_putendl("back to main");
  ft_putendl(m->ants);
  ft_putendl(m->start);
  ft_putendl(m->end);
  exit_program(m);
  return (0);
}
