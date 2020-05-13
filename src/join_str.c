#include "lem_in.h"

char	*join_str(char *s1, char *s2, int clean)
{
	char *new_str;

	if (ft_strlen(s1) == 0)
	{
		free(s1);
		return (s2);
	}
	new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strcat(new_str, s1);
	ft_strcat(new_str, "\n");
	ft_strcat(new_str, s2);
	free(s1);
	(clean) ? free(s2) : 0;
	return (new_str);
}
