/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:10:08 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/04 10:22:02 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dest2;
	const unsigned char		*temp;
	size_t					i;

	dest2 = (unsigned char *)dest;
	temp = (unsigned char *)src;
	i = 0;
	if (!temp && !dest2)
		return (NULL);
	if (temp < dest2)
	{
		while (n-- > 0)
			dest2[n] = temp[n];
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
