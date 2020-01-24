/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:37:40 by mduma             #+#    #+#             */
/*   Updated: 2019/08/22 16:58:09 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# include "../libft/libft.h"

# define BUFF_SIZE 1

int		get_next_line(const int fd, char **line);

#endif
