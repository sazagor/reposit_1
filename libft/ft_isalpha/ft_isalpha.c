/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjosue <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:58:13 by mjosue            #+#    #+#             */
/*   Updated: 2019/07/20 17:58:15 by mjosue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalpha(int c)
{   
    if (((64 < c) && (c < 91)) || ((96 < c) && (c < 123)))
        return (1);
    else
        return (0);
    return(0);
}
