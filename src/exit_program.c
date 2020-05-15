#include "../lemin.h"

static void delete_double_int_arr(int **arr, t_map *m)
{
  int i = 0;

  while (i < m->num_rooms)
    free(arr[i++]);
  free(arr);
  arr = NULL;
}

void  exit_program(t_map *m)
{
  ft_strdel(&(m->ants));
  ft_strdel(&(m->rooms));
  ft_strdel(&(m->links));
  ft_strdel(&(m->start));
  ft_strdel(&(m->end));
  free(m->rooms_array);
  delete_double_int_arr(m->adj_mat, m);
  free(m);
  m = NULL;
  exit(0);
}
