/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:10:16 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/03 13:01:10 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
