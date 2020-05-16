#include "../lemin.h"

static void  print_ants_rooms(int ant, int room)
{
  ft_putchar('L');
  ft_putnbr(ant);
  ft_putchar('-');
  ft_putnbr(room);
  ft_putchar(' ');
}

void  print_path(t_map *m, int n)
{
  int   ants;

  if (n == (m->path_position + m->num_ants + 1))
    return ;
  ants = m->num_ants;
  while (ants > 0)
  {
    if (n - ants > 0 && (n - ants) <= m->path_position)
      print_ants_rooms(ants, m->rooms_array[m->path[n - ants]]);
    ants--;
  }
  ft_putchar('\n');
  n++;
  print_path(m, n);
}
