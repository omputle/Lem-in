#include "lem_in.h"

static void	header(t_map *m)
{
	int i;

	i = -1;
	ft_putstr("\n\n");
	ft_putstr("\t   ");
	while (++i < m->quant_rooms)
	{
		ft_putchar(' ');
		ft_putnbr((i > 9) ? (i % 10) : i);
	}
	ft_putstr("\n\n");
}

void		print_system(t_map *m)
{
	int i;
	int j;

	header(m);
	i = -1;
	while (++i < m->quant_rooms)
	{
		ft_putchar('\t');
		ft_putnbr((i > 9) ? (i % 10) : i);
		ft_putstr("   ");
		j = -1;
		while (++j < m->quant_rooms)
		{
			ft_putnbr(m->table[i][j]);
			ft_putchar(' ');
		}
		ft_putstr("\t\t");
		ft_putchar('[');
		ft_putnbr(i);
		ft_putstr("] -  ");
		ft_putendl(m->rooms[i]);
	}
	ft_putstr("\n\n");
}
