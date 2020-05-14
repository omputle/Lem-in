#include "../lemin.h"

static void locate_start(t_map *m)
{
  char  **rooms_list;
  char  *str;
  int i;

  i = 0;
  rooms_list = ft_strsplit(m->rooms, '\n');
  while (rooms_list[i] != NULL)
  {
    str = ft_strtrim(rooms_list[i]);
    if (ft_strcmp(str, "##start") == 0 && rooms_list[i + 1] != NULL)
      m->start = ft_strtrim(rooms_list[++i]);
    ft_strdel(&str);
    i++;
  }
  del_array_arrays(rooms_list);
  if (ft_strlen(m->start) == 0)
    exit_program(m);
}

static void locate_end(t_map *m)
{
  char  **rooms_list;
  char  *str;
  int i;

  i = 0;
  rooms_list = ft_strsplit(m->rooms, '\n');
  while (rooms_list[i] != NULL)
  {
    str = ft_strtrim(rooms_list[i]);
    if (ft_strcmp(str, "##end") == 0 && rooms_list[i + 1] != NULL)
      m->end = ft_strtrim(rooms_list[++i]);
    ft_strdel(&str);
    i++;
  }
  del_array_arrays(rooms_list);
  if (ft_strlen(m->end) == 0)
    exit_program(m);
}


static  void count_rooms()
{
  /* code */
}

void find_paths(t_map *m)
{
  locate_start(m);
  locate_end(m);
}
