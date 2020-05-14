#include "../lemin.h"

void  get_links(t_map *m, char *line)
{
  if (line[0] == '#')
    return ;
  if (m->check == 2)
    m->check = 3;
  if (m->check != 3)
    exit_program(m);
  m->links = append_string(m->links, line);
}
