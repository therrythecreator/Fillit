/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:56:01 by flhember          #+#    #+#             */
/*   Updated: 2019/01/09 11:55:38 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../Libft/includes/libft.h"
# include <fcntl.h>
# include <stdio.h> // a retirer !!!!!!!!!!!!!!!!!

t_list		*ft_read_file(int fd, t_list **list);

#endif
