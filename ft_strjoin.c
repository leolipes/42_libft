/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:31:03 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/20 18:30:27 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	counts1;
	size_t	counts2;
	size_t	size;
	char	*str;

	counts1 = 0;
	counts2 = 0;
	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (s1[counts1])
	{
		str[counts1] = s1[counts1];
		counts1++;
	}
	while (s2[counts2])
	{
		str[counts1 + counts2] = s2[counts2];
		counts2++;
	}
	str[counts1 + counts2] = 0;
	return (str);
}
