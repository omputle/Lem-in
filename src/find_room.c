#include "../lemin.h"

int find_room(t_map *m, int room)
{
  int i;

  i = 0;
  while (i < m->num_rooms)
  {
    if (m->rooms_array[i] == room)
      return (i);
    i++;
  }
  return (i);
}
