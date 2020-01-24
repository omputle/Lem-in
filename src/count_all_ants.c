#include "lem_in.h"

void	count_all_ants(t_map *m, char *line)
{
	int		i;
	char	*s;

	i = 0;
	m->val_started = 1;
	m->ants_str = join_str(m->ants_str, line, 0);
	if (line[0] == '#')
		return ;
	s = ft_strtrim(line);
	if ((m->quant_ants = ft_atoi(s)) <= 0)
		exit_func(m, 1);
	while (s[i] != '\n' && s[i] != 0)
	{
		if (!ft_isdigit(s[i++]))
			exit_func(m, 1);
	}
}
