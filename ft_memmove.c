/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 09:10:08 by leolipes          #+#    #+#             */
/*   Updated: 2021/07/30 17:22:42 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*tmp;
	char			*dest2;
	unsigned int	i;

	tmp = (char *)src;
	dest2 = (char *)dest;
	i = 0;
	if (tmp < dest2)
	{
		while (n > 0)
		{
			n--;
			dest2[n] = tmp[n];
		}
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
