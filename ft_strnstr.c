/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:04:09 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/05 16:25:25 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;
	size_t	match;

	i = 0;
	len_little = 0;
	match = 0;
	if (*little == '\0')
		return ((char *)big);
	while (little[len_little] != '\0')
		len_little++;
	while (big[i] != '\0' && len >= len_little)
	{
		while (big[i + match] == little[match])
		{
			if (match + 1 == len_little)
				return ((char *)&big[i]);
			match++;
		}
		match = 0;
		len--;
		i++;
	}
	return (NULL);
}
