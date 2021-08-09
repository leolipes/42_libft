/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:24:16 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/09 09:44:49 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str =	(char *)malloc(ft_strlen(s) + 1);
	if (!s)
		return (NULL);
	while (s[i])
	{
		str[i] = ((char *)s)[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
