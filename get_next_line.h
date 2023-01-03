/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:21:35 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/11/02 10:33:58 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE
# define FT_GET_NEXT_LINE
#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 42


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*get_next_line(int fd);

#endif