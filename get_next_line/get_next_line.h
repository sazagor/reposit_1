/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:41:18 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/16 14:11:02 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<string.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<sys/types.h>
# include	<sys/stat.h>
# include	<fcntl.h>
# include   "libft.h"
# define	BUFF_SIZE 1000
# define    CHECK(a) if (!a) return (-1);





typedef struct 		s_data
{
	char 			*buff_all;
	char			*tmp;
	int				count;
	int 			fd;
	int 			ret;
    int             retur;
	struct s_data 	*next;
}					t_data;

int				get_next_line(const int fd, char **line);

#endif
