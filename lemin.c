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
  adjacency_matrix(m);

  exit_program(m);
  // char *s1;
  // char **s2;
  //
  // s2 = ft_strsplit("the day the earth stood still", ' ');
  // s1 = ft_strimplode(s2, "the", "earth");
  // ft_putendl(s1);
  return (0);
}
