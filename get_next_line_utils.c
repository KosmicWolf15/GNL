/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgarcia- <pgarcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:15:11 by pgarcia-          #+#    #+#             */
/*   Updated: 2022/02/16 18:15:11 by pgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *str, size_t size);
void	*ft_calloc(size_t items, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *str, const char *substr, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	*ft_calloc(size_t items, size_t size)
{
	void			*str;
	unsigned int	i;

	i = items * size;
	str = malloc(i);
	if (!str)
		return (NULL);
	ft_bzero(str, i);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cnt;
	int		size;
	char	*str;

	if (!(s1 && s2))
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	cnt = 0;
	while (*s1)
		str[cnt++] = *s1++;
	while (*s2)
		str[cnt++] = *s2++;
	str[cnt] = '\0';
	return (str);
}

void	ft_bzero(void *str, size_t size)
{
	ft_memset(str, 0, size);
}

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	cnt;
	size_t	cnt2;

	cnt = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[cnt] && len > cnt)
	{
		cnt2 = 0;
		while (str[cnt + cnt2] && substr[cnt2] && len > (cnt + cnt2))
		{
			if (str[cnt + cnt2] != substr[cnt2])
				break ;
			cnt2++;
		}
		if (substr[cnt2] == '\0')
			return ((char *)str + cnt);
		cnt++;
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	cnt;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size > len)
		size = len;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	size = 0;
	cnt = 0;
	while (cnt < len && s[size])
	{
		if (size >= start)
		{
			str[cnt] = s[size];
			cnt++;
		}
		size++;
	}
	str[cnt] = '\0';
	return (str);
}

char	*ft_strrchr(const char *s, int c)
{
	int		inv;
	char	*str;

	str = (char *)s;
	inv = ft_strlen(str);
	while (inv >= 0)
	{
		if (str[inv] == (char)c)
			return (str + inv);
		--inv;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}