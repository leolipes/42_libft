/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:18:10 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/20 11:45:09 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_nbrstr(char *s, char c)
{
	size_t		nbrstr;
	short int	str_found;

	str_found = 0;
	nbrstr = 0;
	if (!s)
		return (0);
	while (1)
	{
		if ((*s == c || *s == '\0') && str_found != 0)
		{
			nbrstr++;
			str_found = 0;
		}
		else if (*s != c)
			str_found = 1;
		if (*s == '\0')
			break ;
		s++;
	}
	return (nbrstr);
}

static size_t	ft_get_length(char *s, char c)
{
	size_t	index;

	index = 0;
	while (*s && *s != c)
	{
		index++;
		s++;
	}
	return (index);
}

static void	ft_malloc_error(char **matrix, size_t nbrstr)
{
	size_t	index;

	index = 0;
	while (index < nbrstr)
	{
		if (matrix[index])
			free(matrix[index]);
		index++;
	}
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	size_t	nbrstr;
	size_t	index;
	char	**matrix;

	index = 0;
	if (!s)
		return (NULL);
	nbrstr = ft_get_nbrstr((char *)s, c);
	matrix = (char **)ft_calloc(nbrstr + 1, sizeof(char *));
	if (!matrix)
		return (NULL);
	while (nbrstr--)
	{
		while (*s == c)
			s++;
		matrix[index] = ft_substr((char *)s, 0, ft_get_length((char *)s, c));
		if (!matrix[index])
		{
			ft_malloc_error(matrix, index);
			return (0);
		}
		s = s + ft_get_length((char *)s, c);
		index++;
	}
	return (matrix);
}
