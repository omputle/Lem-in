/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:32:26 by mduma             #+#    #+#             */
/*   Updated: 2019/08/22 17:33:00 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ss;
	char	*str;
	size_t	i;

	i = 0;
	ss = (char *)s1;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (ss[i] != '\0' && i < n)
	{
		str[i] = ss[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
