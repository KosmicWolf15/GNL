/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:21:31 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/11/02 18:01:50 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static *char buff;  /*Almacenamos aquí todo lo leido hasta el momento*/
	size_t size;		/*Numero de bytes que leeremos*/
	size_t = cnt;		/*Contador donde guardaremos el resultado de read
						ya que read devuelve el numero de caracteres
						REALMENTE leidos, ya que nosotros podemos 
						indicarle que lea 100 pero si hay 30 solo leera esos*/
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return(NULL);
	buff = (char *)malloc(sizeof(char));
	if (buff == 0)
		return(0);
		
	cnt = read(fd, buff, size);

		if (buff != 0)
		{
			
		}
	return (buff);
}