/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:05:33 by mduma             #+#    #+#             */
/*   Updated: 2019/07/12 16:01:04 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int a;
	int b;

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
	{
		s1[a + b] = s2[b];
		b++;
	}
	s1[a + b] = '\0';
	return (s1);
}
