#include "../lemin.h"

void  print_map(t_map *m)
{
  int i = 0;

  ft_putendl(m->ants);
  ft_putendl(m->rooms);
  ft_putendl(m->links);
  while (i <= m->path_position)
  {
    ft_putchar('[');
    ft_putnbr(m->path[i]);
    ft_putchar(']');
    if (i < m->path_position)
      ft_putchar('-');
    i++;
  }
  ft_putstr("\n\n");
}
