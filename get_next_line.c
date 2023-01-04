/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:14:34 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/02/16 18:14:34 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include"get_next_line.h"
/*
char	*get_next_line(int fd);
char	*reading(int fd, char *buff);
char	*new_line(char *buff, char *str);

char	*new_line(char *buff, char *str)
{
	char	*temp;
	int		start;

	start = ft_strnstr(str, buff, BUFFER_SIZE);
	temp = ft_substr(str, start, BUFFER_SIZE);
	return (temp);
}

char	*reading(int fd, char *buff)
{
	char	*rbuff;
	int		nbytes;

	nbytes = 1;
	rbuff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!rbuff)
		return (NULL);
	while (nbytes > 0)
	{
		nbytes = read(fd, rbuff, BUFFER_SIZE);
		
		if (nbytes == -1)
		{
			free(rbuff);
			return (NULL);
		}
		buff = ft_strjoin(buff, rbuff);
		free(rbuff);
		if (ft_strrchr(buff, '\n'))
			break ;
	}
	return (buff);
}

char	*get_next_line(int fd)
{
	static char		*buff;
	char			*str;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = reading(fd, buff);
	if (!buff)
		return (NULL);
	str = new_line(buff, str);
	return (str);
}
*/
int main()
{
	FILE *fp;
	char linea[100];

	fp = fopen("archivo.txt", "r");
	if (fp == NULL)
	{
		return (0);
	}
	else
	{
		while (feof(fp) == 0)
		{
			fgets(linea, 100, fp);
			printf("%s", linea);
		}
	}
	fclose(fp);
	return (0);
}