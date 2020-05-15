#include "../lemin.h"

static  void set_rooms_array(t_map *m, char *start, char *end)
{
  char **rooms_str;
  char **inv_str;
  char **room;
  char  *temp;
  int i = 0;
  int count = 1;

  m->rooms_array = (int*)malloc(sizeof(int) * (m->num_rooms));
  // ft_putendl("after malloc");
  inv_str = ft_strsplit(m->rooms, '\n');
  // ft_putendl("after slit");
  temp = ft_strimplode(inv_str, m->start, m->end);
  ft_putendl(temp);
  rooms_str = ft_strsplit(temp, '\n');
  m->rooms_array[0] = ft_atoi(start);
  m->rooms_array[m->num_rooms - 1] = ft_atoi(end);
  while (count < m->num_rooms - 1)
  {
    room = ft_strsplit(rooms_str[i], ' ');
    if (room[0][0] != '#')
    {
      ft_putendl("in if");
      m->rooms_array[count] = ft_atoi(room[0]);
      count++;
    }
    del_array_arrays(room);
    i++;
  }
  ft_strdel(&temp);
  del_array_arrays(inv_str);
  del_array_arrays(rooms_str);
}

static void create_adjaceny_matrix(t_map *m)
{
  int i = 0;
  int j = 0;

  m->adj_mat = (int**)malloc(sizeof(int*) * m->num_rooms);
  while (i < m->num_rooms)
  {
    j = 0;
    m->adj_mat[i] = (int*)malloc(sizeof(int) * m->num_rooms);
    while (j < m->num_rooms)
    {
      m->adj_mat[i][j] = 0;
      j++;
    }
    i++;
  }
}

void  add_links_to_adjmat(t_map *m)
{
  char  **links;
  char  **link;
  int   left;
  int   right;
  int i = 0;

  links = ft_strsplit(m->links, '\n');
  while (links[i] != NULL)
  {
    link = ft_strsplit(links[i], '-');
    left = find_room(m, ft_atoi(link[0]));
    right = find_room(m, ft_atoi(link[1]));
    if (left < m->num_rooms && right < m->num_rooms)
    {
      m->adj_mat[left][right] = 1;
      // m->adj_mat[right][left] = 1;
    }
    del_array_arrays(link);
    i++;
  }
  del_array_arrays(links);
}

void  adjacency_matrix(t_map *m)
{
  int i = 0;
  int j = 0;
  char **start;
  char **end;

  start = ft_strsplit(m->start, ' ');
  end = ft_strsplit(m->end, ' ');
  ft_putendl("entering set rooms");
  set_rooms_array(m, start[0], end[0]);
  ft_putstr("rooms: ");
  ft_putnbr(m->num_rooms);
  ft_putchar('\n');
  while(i < m->num_rooms)
  {
    ft_putnbr(i);
    ft_putchar(' ');
    ft_putnbr(m->rooms_array[i++]);
    ft_putchar('\n');
  }
  create_adjaceny_matrix(m);
  i = 0;
  j = 0;
  while (i < m->num_rooms)
  {
    j = 0;
    while (j < m->num_rooms)
    {
      ft_putnbr(m->adj_mat[i][j]);
      ft_putstr("  ");
      j++;
    }
    ft_putchar('\n');
    i++;
  }
  ft_putendl("\n");
  add_links_to_adjmat(m);
  i = 0;
  j = 0;
  while (i < m->num_rooms)
  {
    j = 0;
    while (j < m->num_rooms)
    {
      ft_putnbr(m->adj_mat[i][j]);
      ft_putstr("  ");
      j++;
    }
    ft_putstr("\t\t");
    ft_putchar('[');
    ft_putnbr(i);
    ft_putstr("] -  ");
    ft_putnbr(m->rooms_array[i]);
    ft_putchar('\n');
    i++;
  }
  del_array_arrays(start);
  del_array_arrays(end);
}
